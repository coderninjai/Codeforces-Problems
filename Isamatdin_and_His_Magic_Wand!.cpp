#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        vector<long long> a(n), odds, evens;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2) odds.push_back(a[i]);
            else evens.push_back(a[i]);
        }

       
        if (odds.empty() || evens.empty()) {
            for (int i = 0; i < n; ++i) {
                if (i) cout << ' ';
                cout << a[i];
            }
            cout << '\n';
            continue;
        }

        sort(odds.begin(), odds.end());
        sort(evens.begin(), evens.end());
        int oi = 0, ei = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] % 2) cout << ( (i? " " : "" ), odds[oi++] );
            else cout << ( (i? " " : "" ), evens[ei++] );
            if (i < n-1) cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}