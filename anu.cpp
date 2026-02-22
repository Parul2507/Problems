#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char, int> mp;
    for(auto ch : s)
    {
        mp[ch] += 1;
    }
    for(auto x : mp)
    {
        cout << x.first << " " << x.second <<endl;
    }
}