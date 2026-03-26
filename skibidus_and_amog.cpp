#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = (s.length()) - 1;
        vector <char> result;
        for(int i=0; i<n-1; i++)
        {
            result.push_back(s[i]);
        }
        result.push_back('i');
        for(auto x : result)
        {
            cout << x;
        }
        cout << endl;
    }
}