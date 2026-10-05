#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<long long, long long> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        long long max_val = -1;
        long long max_f = -1;
        for (auto x : mp)
        {
            if (x.second > max_f)
            {
                max_f = x.second;
                max_val = x.first;
            }
        }
        long long ans = 0;
        long long rem = n - max_f;
        if ((rem + 1) >= max_f)
        {
            for (int i = 0; i < n; i++)
            {
                ans += a[i];
            }
            cout << ans << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] != max_val)
                {
                    ans += a[i];
                }
            }
            ans += (rem + 2) * max_val;
            cout << ans << endl;
        }
    }
}