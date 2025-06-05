#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long l;
        cin>>l;
        if(l==1){
            cout<<0<<endl;
        }
        else if(l%2==0){
            cout<<(l/2)-1<<endl;
        }else{
            cout<<l/2<<endl;
        }
    }
    return 0;
}