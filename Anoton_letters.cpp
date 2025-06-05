#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string s2;
    set<char> s;
    getline(cin, s2);
    for (int i = 1; i < s2.size(); i++)
    {
        if (isalpha(s2[i]) )
        {
            s.insert(s2[i]);
        }
    }
    cout << s.size();
    return 0;
}