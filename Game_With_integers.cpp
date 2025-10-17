#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        if (a % 3 == 1||a % 3 == 2)
        {
            cout << "First"<<endl;
        }
        else
        {
            cout << "Second"<<endl;
        }
    }
        return 0;
    }