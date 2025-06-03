#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    int n, a, z, b;
    set<int> s;
    cin >> n >> z;
    for (int i = 0; i < z; i++)
    {
        cin >> a;
        s.insert(a);
    }
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> b;
        s.insert(b);
    }
    int m = s.size();

    if (n == m)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
    return 0;
}