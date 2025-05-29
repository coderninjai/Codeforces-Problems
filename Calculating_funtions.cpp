#include<iostream>
using namespace std;

int main(){
    long long l,n;
    cin>>n;
        if(n%2==0){
          l=(n/2);
        }else{
            l=-((n+1)/2);
        }
       cout<<l;
    return 0;
}

