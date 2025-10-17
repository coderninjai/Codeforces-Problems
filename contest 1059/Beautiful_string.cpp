#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s) {
    int i = 0, j = (int)s.size() - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++, j--;
    }
    return true;
}

bool isNonDecreasing(const string &s) {
    for (int i = 1; i < (int)s.size(); ++i)
        if (s[i] < s[i - 1]) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool found = false;
        for (int mask = 0; mask < (1 << n); ++mask) {
            string p = "", x = "";
            vector<int> indices;
            
            for (int i = 0; i < n; ++i) {
                if (mask & (1 << i)) {
                    p += s[i];
                    indices.push_back(i + 1);
                } else {
                    x += s[i];
                }
            }

            if (isNonDecreasing(p) && isPalindrome(x)) {
                cout << indices.size() << "\n";
                for (int idx = 0; idx < (int)indices.size(); ++idx)
                    cout << indices[idx] << (idx + 1 == (int)indices.size() ? '\n' : ' ');
                found = true;
                break;
            }
        }

        if (!found)
            cout << -1 << "\n";
    }

    return 0;
}
