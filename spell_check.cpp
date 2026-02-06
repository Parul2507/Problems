#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        if (n != 5)
        {
            cout << "NO" << endl;
            continue;
        }
        string s = "Timur";
        sort(a.begin(), a.end());
        sort(s.begin(), s.end());
        if (a == s)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}