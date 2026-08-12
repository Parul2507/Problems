#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int b[n];
        int sum_a = 0;
        int sum_b = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum_a += a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            sum_b += b[i];
        }
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        for (int i = 0; i < k; i++)
        {
            if (b[i] > a[i])
            {
                int temp = a[i];
                a[i] = b[i];
                b[i] = temp;
            }
            else
            {
                break;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += a[i];
        }
        cout << ans << endl;
    }
}
