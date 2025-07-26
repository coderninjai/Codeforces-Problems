#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, add= 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[i]=x;
    }
    sort(a,a+n);
   for(int i=0;i<n;i++){
    add =add+(a[n-1]-a[i]);
   }
    cout << add << endl;
    return 0;
}