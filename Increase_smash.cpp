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
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        // Use a set to count distinct values
        set<int> s(a.begin(), a.end());

        // Minimum operations = 2 * distinct_count - 1
        int operations = 2 * (int)s.size() - 1;
        cout << operations << "\n";
    }

    return 0;
}
