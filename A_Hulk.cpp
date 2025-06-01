#include <iostream>
using namespace std;

int main()
{
    int n;
    string s = "that I love ", s1 = "that I hate ", s3;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            s3.append("I hate ");
        }
        else if (i % 2 == 0)
        {
            s3.append(s);
        }
        else 
        {
            s3.append(s1);
        }
    }
    cout << s3<<"it";
    return 0;
}