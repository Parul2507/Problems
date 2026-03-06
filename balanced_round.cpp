#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int count = 0;
        int n, k;
        cin >> n >> k;
        vector <int> arr(n);
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int len = 1;
        int current = 1;
        for(int i = 1; i < n; i++)
        {
            if(arr[i] - arr[i-1] <= k)
            {
                len++;
            }
            else
            {
                len = 1;
            }
            current = max(current, len);
        }
        cout << n - current << endl;
    }
}