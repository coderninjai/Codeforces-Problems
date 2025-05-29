#include <iostream>
using namespace std;

int main()
{
    int n;
    double  sum=0.0 ,ans=0.0;
    cin >> n;
    int A[100];
    for (int i = 1; i <= n; i++)
    {
        cin>>A[i];
        sum+=A[i];
    }
    ans=sum/n;
    cout<<ans;
   
    return 0;
}