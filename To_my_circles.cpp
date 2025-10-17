    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int n;
        cin>>n;
        while(n--){
            vector<int>a(3);
            for(int i=0;i<3;i++){
                cin>>a[i];
            }

            sort(a.begin(),a.end());

            if((a[2]+a[1])>=10){
                cout<<"Yes"<<endl;

            }else{
                cout<<"NO"<<endl;
            }
        }
        return 0;
    }