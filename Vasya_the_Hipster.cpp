#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b;
    if (a < b){

        cout << a;
        c = (b - a) / 2;
        cout << " "<<c;
    }
    else {

        cout << b ;
        c = ( a-b) / 2;
        cout <<" "<<c;
    }

    return 0;
}