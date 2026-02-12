#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        // divisor, remainder, divident
        int x, y, n;
        cin >> x >> y >> n;
        int q = (n-y)/x;
        int ans = q*x+y;
        cout << ans << endl;
    }
}