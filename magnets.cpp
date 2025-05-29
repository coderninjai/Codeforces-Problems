#include<iostream>
using namespace std;

int main(){
    int n, l=1;
    cin>>n;
    string s1,s2;
    cin>>s1;
    for (int i=1;i<n;i++){
        cin>>s2;
        if (s1!=s2){
            l++;
           s1=s2;
        }
    }
    cout<<l<<endl;
    return 0;
}