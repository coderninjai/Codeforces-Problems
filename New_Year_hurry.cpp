#include<iostream>
using namespace std;

int main(){
    int n,a,b=0;
    cin>>n>>a;
    for(int i=0;i<n;i++){
       
        a+=5;
      
        if(a<240){
            b++;
            a+=5;
        }
    }
    cout<<b;
    return 0;
}