#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

long long gcd_func(long long a, long long b) {
    while (b) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int64 gcd_all(const vector<int64> &a) {
    int64 g = a[0];
    for (size_t i = 1; i < a.size(); ++i)
        g = gcd_func(g, a[i]);
    return g;
}

vector<int64> prime_factors(int64 n) {
    vector<int64> primes;
    for (int64 p = 2; p * p <= n; ++p) {
        if (n % p == 0) {
            primes.push_back(p);
            while (n % p == 0) n /= p;
        }
    }
    if (n > 1) primes.push_back(n);
    return primes;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int64> a(n);
        for (auto &x : a) cin >> x;

        int64 g = gcd_all(a);
        if (g == 1) {
            cout << 2 << "\n";
            continue;
        }

        vector<int64> pf = prime_factors(g);
        for (int64 x = 2;; ++x) {
            bool ok = true;
            for (auto p : pf) {
                if (x % p == 0) { ok = false; break; }
            }
            if (ok) {
                cout << x << "\n";
                break;
            }
        }
    }
    return 0;
}
