#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int a,b,c,d; 
        cin >> a >> b >> c >> d;
        cout << ((a==b && b==c && c==d) ? "YES\n" : "NO\n");
    }
    return 0;
}
