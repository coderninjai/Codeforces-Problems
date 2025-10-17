#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> g(n);
        for (int i = 0; i < n; i++) cin >> g[i];

        sort(g.begin(), g.end()); // sort ascending
        long long total = 0;
        long long gmin = g[0];

        for (int i = 1; i < n; i++) {
            total += g[i];
        }

        cout << total << "\n";
    }
    return 0;
}
