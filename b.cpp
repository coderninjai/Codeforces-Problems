#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> results;

        for (int k = 1; ; k++) {
            long long power = 1;
            for (int i = 0; i < k; i++) power *= 10; // 10^k

            long long divisor = power + 1;
            if (divisor > n) break;

            if (n % divisor == 0) {
                long long x = n / divisor;
                results.push_back(x);
            }
        }

        // print all possible x for this test case
        for (long long x : results) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
// not good
