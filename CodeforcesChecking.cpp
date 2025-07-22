#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a = "codeforces";
    bool s = true;
    while (n--)
    {
        char c;
        cin >> c;

        for (int i = 0; i < a.size(); i++)
        {
            if (c == a[i])
            {

                cout << "yes"<<endl;
                s = true;
                break;
            }
            else
            {
                s = false;
            }
        }
        if (s == false)
            cout << "No"<<endl;
    }
    return 0;
}