// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     int n, z, x, count = 0;
//     int arr;
//     for (int i = 0; i < t; i++)
//     {
//         cin >> n >> x;
//         for (int i = 1; i <= n; i++)
//         {
//             vector<int> doors(n);
//             for (int i = 0; i < n; ++i)
//             {
//                 cin >> doors[i];
//             }
//             for (int j=0;j<n;j++){
                
//             }
//         }
        
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

bool can_pass(int n, int x, const vector<int>& a) {
    int first = -1, last = -1;

    // Find the first and last closed doors (value 1)
    for (int i = 0; i < n; ++i) {
        if (a[i] == 1) {
            first = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; --i) {
        if (a[i] == 1) {
            last = i;
            break;
        }
    }

    // Number of doors button must cover
    int needed = last - first + 1;
    return needed <= x;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        cout << (can_pass(n, x, a) ? "YES" : "NO") << endl;
    }

    return 0;
}
