#include <bits/stdc++.h>
using namespace std;

bool hasDuplicate(const vector<int> &arr)
{
    unordered_set<int> seen;
    for (int x : arr)
    {
        if (seen.count(x))
        {
            return true; // duplicate found
        }
        seen.insert(x);
    }
    return false; // no duplicate
}

bool isSatisfactory(int a, const vector<int> &arr)
{
    if (a == 1)
    {
        return true;
    }
    else if (hasDuplicate(arr))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        vector<int> arr(a);
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }

        if (isSatisfactory(a, arr))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}