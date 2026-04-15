#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> mp;
        int x;
        int ans = -1;
        for(int i=0; i<n; i++)
        {
            cin >> x;
            mp[x]++;
            if(mp[x] == 3 && ans == -1)
            {
                ans = x;
            }
        }
        cout << ans << endl;
    }
}