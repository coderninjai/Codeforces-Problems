#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    for (int i = 1; n != 0; i++)
    {
        if (n >= 100)
        {
            n = n - 100;
        }
        else if (n >= 20)
        {
            n = n - 20;
        }
        else if (n >= 10)
        {
            n = n - 10;
        }
        else if (n >= 5)
        {
            n = n - 5;
        }
        else
        {
            n = n - 1;
        }
        count = i;
    }
    cout<<count;
    return 0;
}