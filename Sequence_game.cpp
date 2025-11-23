#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long mn = (long long)4e18, mx = -(long long)4e18;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            mn = min(mn, a[i]);
            mx = max(mx, a[i]);
        }
        long long x;
        cin >> x;

        if (mn <= x && x <= mx) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
