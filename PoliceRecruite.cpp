#include<iostream>
using namespace std;

int main(){
    int n,a;
    cin>>n;
    int police=0, crime=0;
    while(n--){
        cin>>a;
        if(a>0){
            police+=a;
        }
        else{
            crime++;
        }
        if(police>0&&a==-1){
            crime--;
            police--;
        }

    }
    cout<<crime;
    return 0;
}