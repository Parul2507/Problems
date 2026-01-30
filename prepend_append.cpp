#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int a = n;
        for (int i = 0; i < a / 2; i++)
        {
            if (s[i] == '0' && s[a - i - 1] == '1')
            {
                n = n - 2;
            }
            else if (s[i] == '1' && s[a - i - 1] == '0')
            {
                n = n - 2;
            }
            else
            {
                break;
            }
        }
        cout << n << endl;
    }
}