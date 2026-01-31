#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == 'a')
        {
            cout << "YES" << endl;
        }
        else if (s[1] == 'a' &&  s[0] == 'b')
        {
            cout << "YES" << endl;
        }
        else if (s[2] == 'a' && s[0] == 'c')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}