#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n,a,b;
    int count=0;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        cin >> s;
        for(int i=0;i<(s.size())/2;i++){
            if(s[i]=s[s.size()-1-i]=1){
                count++;
            }
        }
       if(count>=b){
        cout<<"YES"<<endl;
       }else{
        cout<<"NO"<<endl;
       }
       
    }
    return 0;
}