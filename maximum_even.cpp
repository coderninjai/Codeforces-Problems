#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long ans = -1;

        // Find all divisors of b
        vector<long long> divisors;
        for (long long i = 1; i * i <= b; i++) {
            if (b % i == 0) {
                divisors.push_back(i);
                if (i != b / i) divisors.push_back(b / i);
            }
        }

        // Try each divisor as k
        for (auto k : divisors) {
            long long new_a = a * k;
            long long new_b = b / k;
            if ((new_a + new_b) % 2 == 0) {
                ans = max(ans, new_a + new_b);
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
