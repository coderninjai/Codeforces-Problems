#include <iostream>
using namespace std;

int main()
{
    int n, a, min_value = 110, max_value = 0, mini = 0, maxi = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a > max_value)
        {
            max_value = a;
            maxi = i;
        }
        if (a < min_value)
        {
            min_value = a;
            mini = i;
        }
    }
    if (maxi > mini)
    {
        cout << (maxi - 1) + (n - mini) - 1;
    }
    else
    {
        cout << (maxi - 1) + (n - mini);
    }
    return 0;
}