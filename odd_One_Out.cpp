#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> a(3);
    int n;
    cin>>n;
    while(n--){
        for(int i=0;i<3;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());

        if(a[0]==a[1])cout<<a[2]<<endl;
        if(a[0]==a[2])cout<<a[1]<<endl;
        if(a[1]==a[2])cout<<a[0]<<endl;
    }
    return 0;
}