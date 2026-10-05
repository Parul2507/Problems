#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int ans = (1<<(n - k + 1)) + 2 * (k - 1);
        cout << ans << endl;
    }
}