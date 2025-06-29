#include <iostream>
using namespace std;
#define FastInput ios_base::sync_with_stdio(false); cin.tie(NULL);
#include <bits/stdc++.h>
#define ll long long
//"


int main() {

    FastInput

    int n;
    cin>>n;

    vector<int>arry(n);

    for(int i=0;i<n;i++)
        cin>>arry[i];

   for(int i=0;i<n;i++){

    int minCost=INT_MAX,maxCost=INT_MIN;

    maxCost=max(abs(arry[i]-arry[0]),abs(arry[i]-arry[n-1]));

    if(i==0)
      minCost=abs(arry[i]-arry[i+1]);
    else if(i==n-1)
      minCost=abs(arry[i]-arry[i-1]);
    else
      minCost=min(abs(arry[i]-arry[i-1]),abs(arry[i]-arry[i+1]));


     cout<<minCost<<" "<<maxCost<<endl;


   }




}