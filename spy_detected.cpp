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
        int arr[a];
        int majority;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        
        if (arr[0] == arr[1])
            majority = arr[1];
        else
            majority = arr[2];

        for (int i = 0; i < a; i++)
        {
            if (arr[i] != majority)
                cout << i << endl;
        }
    }
    return 0;
}