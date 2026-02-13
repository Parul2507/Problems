#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        if(n % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        int a = n/2;
        bool pass = true;
        for(int i = 0; i < n/2; i++)
        {
            if(s[i] != s[a])
            {
                pass = false;
                break;
            }
            a++;
        }
        if(pass)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}