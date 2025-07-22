#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int ans = 0, b;
        cin >> b;
        bool c = true;

        vector<int> a(b);

        for (int i = 0; i < b; i++)
        {
            cin >> a[i];
        }

        for (int i = b - 1; i >= 1; i--)
        {
            if (a[i] > a[i - 1])
                continue;

            while (a[i] <= a[i - 1] && a[i - 1] > 0)
            {
                a[i - 1] = a[i - 1] / 2;
                ans++;
            }

            if (a[i - 1] == 0 && (i - 1) > 0)
            {
                c = false;
                break;
            }
        }
        if (c == false)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}