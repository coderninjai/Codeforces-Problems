#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        string s1,s2,s3;
        cin>>a;
        cin>>s1;
        cin>>b;
        cin>>s2;
        cin>>s3;

        int j=0;
        for(int i=0;i<s2.size();i++){
            if(s3[j]=='V'){
                s1.insert(s1.begin(), s2[i]); 
                j++;
            }

            else{
                s1.insert(s1.end(), s2[i]); 
                j++;
            }
        }
         

        cout<<s1<<endl;
    }
    return 0;
}