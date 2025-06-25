#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b,c,d ,count=0;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c>>d;
        if(a<b){
            count++;
        }
        if(a<c){
            count++;
        }
        if(a<d){
            count++;
        }
      
        cout<<count<<endl;
        count=0;
    }
    return 0;
}