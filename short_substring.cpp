#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        for (int i = 0; i < n - 1; i+=2)
        {
            cout << s[i];
        }
        cout<< s[n-1] << endl;
    }
}