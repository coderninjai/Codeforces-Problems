#include <iostream>
using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    int A[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        A[temp] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << A[i]<<" " ;
    }
    return 0;
}