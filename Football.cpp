#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    string k;
    cin >> k;
    for (int i = 0; i < k.size(); i++)
    {
        if (k[i] == k[i + 1])
        {
            count++;
            if (count == 6)
            {
                cout << "YES";
                break;
            }
        }
        else{
            count=0;
        }
    }
    if (count < 6)
    {
        cout << "NO";
    }
    return 0;
}