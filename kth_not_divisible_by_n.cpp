#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long ans;
        if (k < n)
        {
            cout << k << endl;
        }
        else
        {
            ans = k + k / (n - 1);
            if (ans % n == 0)
            {
                ans = ans - 1;
            }
            cout << ans << endl;
        }
    }
}