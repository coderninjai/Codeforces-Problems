#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int >arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        bool istrue = true;
        for(int j=n-1;j>0;j--){
            if(arr[j]-arr[j-1] >1 ){
                istrue=false;
                break;
            }
        }
        if(istrue){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}