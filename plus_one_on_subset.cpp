#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        int mini = *min_element(arr.begin(), arr.end());
        int maxi = *max_element(arr.begin(), arr.end());
        int ans = maxi - mini;
        cout << ans << endl;
    }
}