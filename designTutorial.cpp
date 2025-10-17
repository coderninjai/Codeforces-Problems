#include <iostream>
using namespace std;

// Check if a number is composite
bool isComposite(int n) {
    if (n <= 3) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    
    for (int x = 4; x <= n / 2; x++) {
        int y = n - x;
        if (isComposite(x) && isComposite(y)) {
            cout << x << " " << y << endl;
            break;
        }
    }
    return 0;
}
