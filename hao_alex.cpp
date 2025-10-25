#include <iostream>
using namespace std;

long long haoEat(long long n) {
    if (n <= 2) return 0; // Alex eats all
    long long m1 = n / 3;
    long long m2 = (n - m1) / 2;
    long long m3 = n - m1 - m2;
    return m1 + haoEat(m3);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << haoEat(n) << "\n";
    }
}
