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

        cout<<a[1]<<endl;
    }
    return 0;
}