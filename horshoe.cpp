#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    int k;
    for(int i=0;i<4;i++)
{
    cin>>k;
    s.insert(k);

}   
int m=s.size();
cout<<4-m;
return 0;
}