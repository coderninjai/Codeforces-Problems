#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string a, b, c, final;
    cin >> a >> b >> c;
    final = a + b;
    sort(final.begin(), final.end());
    sort(c.begin(), c.end());
    if (c == final)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
