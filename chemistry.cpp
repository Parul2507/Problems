#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for(auto ch : s)
        {
            mp[ch]++;
        }
        int odd_frequency = 0;
        for(auto x : mp)
        {
            int freq = x.second;
            if(freq % 2 != 0)
            {
                odd_frequency++;
            }
        }
        if(k < odd_frequency - 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}