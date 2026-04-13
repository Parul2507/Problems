#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, q;
        cin >> n >> q;
        int arr[n];
        int as[n];
        as[0] = 0;
        for(int i=1; i<=n; i++)
        {
            cin >> arr[i];
            as[i] = as[i-1] + arr[i];
        }
        while(q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            int sum = as[l-1] + as[n] -as[r] + k*(r-l+1);
            if(sum % 2 != 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}