#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){

        string s;
        cin>>s;
        if(s=="YES"||s=="yes"||s=="Yes"||s=="YEs"||s=="YeS"||s=="yES"||s=="yeS"||s=="yEs"){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}