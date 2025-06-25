#include <bits/stdc++.h>
using namespace std;

/*
For Division 1: 1900≤rating
For Division 2: 1600≤rating≤1899
For Division 3: 1400≤rating≤1599
For Division 4: rating≤1399*/

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a >= 1900)
        {
            cout << "Division 1"<<endl;
        }
        else if (1600 <= a && a<= 1899)
        {
            cout << "Division 2"<<endl;
        }
        else if (1400 <= a && a<= 1599)
        {
            cout << "Division 3"<<endl;
        }
        else
        {
            cout << "Division 4"<<endl;
        }
    }
    return 0;
}