#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        bool found = true;
        for (int i = 0; i < n; i++)
        {
            if (i > 0)
            {
                if (s[i] == '.' && s[i - 1] == '.' && s[i + 1] == '.')
                {
                    found = false;
                }
            }
            if (s[i] == '#')
            {
                count++;
            }
        }
        if (found)
        {
            cout << n - count << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}