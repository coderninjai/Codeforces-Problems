#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    string s;
    cin >> n;
    cin >> s;
    int c[26] = {0};
    for (int i = 0; i < n; i++)
    {
        if (s[i] < 97)
        {
            s[i] = s[i] + 32;
            c[s[i] - 'a'] += 1;
        }
        else
        {
            c[s[i] - 'a'] += 1;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (c[i] == 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
   
}