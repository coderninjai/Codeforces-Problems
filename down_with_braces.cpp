    #include <iostream>
    using namespace std;

    int main()
    {
        int n;
        cin >> n;
        while (n--)
        {
            string s;
            cin >> s;
            int count = 0, f=0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '(')
                {
                    count++;
                }
                if(s[i]==')')
                {
                    count--;
                }
                if (count == 0 && i != s.size() - 1)
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
            {
                cout << "Yes" << endl;
            
            }
            else
            {
                cout << "No" << endl;
                
            }
        }
        return 0;
    }