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
        string c = "codeforces";
        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            if(s[i] != c[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}