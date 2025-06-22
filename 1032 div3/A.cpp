#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, count = 0;
        cin >> a;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < s.size() - 2; j++)
            {

                if (s[i] == s[j + 1])
                {
                    count++;
                }
            }
        }
        if(count>0){
            cout<<"yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}