#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int count = 0;
        for (char c : s)
        {
            int digit = c - '0';
            count += digit;
        }
        cout << count << endl;
    }
    return 0;
}