#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        map<char, int> mp;
        for(char x : s)
        {
            mp[x]++;
        }

        // for(auto x : mp)
        // {
        //     cout << x.first << " " << x.second << endl;
        // }
        char ans;
        int max = 0;
        for(auto &x : mp)
        {
            if(x.second > max)
            {
                max = x.second;
                ans = x.first;
            }
        }

        cout << ans << endl;
    }
}