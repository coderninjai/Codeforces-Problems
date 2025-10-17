#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int k, x;
        cin >> k >> x;

        unordered_set<long long> cur;
        cur.reserve(1 << min(k, 20)); // heuristic reserve
        cur.insert(x);

        for (int step = 0; step < k; ++step) {
            unordered_set<long long> nxt;
            nxt.reserve(cur.size() * 2 + 4);
            for (long long y : cur) {
                // predecessor by doubling
                nxt.insert(2 * y);

                // predecessor by inverse of 3*x+1
                if ((y - 1) % 3 == 0) {
                    long long prev = (y - 1) / 3;
                    if (prev > 0 && (prev % 2 == 1)) {
                        nxt.insert(prev);
                    }
                }
            }
            cur.swap(nxt);
        }

        // pick the largest odd if exists, otherwise largest overall
        long long bestOdd = LLONG_MIN, bestAny = LLONG_MIN;
        for (long long v : cur) {
            if (v % 2 != 0) bestOdd = max(bestOdd, v);
            bestAny = max(bestAny, v);
        }

        if (bestOdd != LLONG_MIN) cout << bestOdd << "\n";
        else cout << bestAny << "\n";
    }
    return 0;
}
