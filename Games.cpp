#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int h[100],a[100];
    for(int i=0;i<n;i++){
        cin>>h[i]>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j&&h[i]==a[j]){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}