#include<iostream>
using namespace std;

int main(){
    int n,a,b;
    int count=0,add=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(b-a>=2){
            count++;
        }
    }
   
        cout<<count<<endl;
    
    return 0;
}