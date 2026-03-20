#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        // int arr[n];
        vector<int> arr(n);
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        // sort(arr, arr+n);
        // int mini = arr[0];
        int mini = *min_element(arr.begin(), arr.end());
        int count = 0;
        for(int i=0; i<n; i++)
        {
            count += (arr[i] - mini);
            // cout << count << " ";
        }
        cout << count << endl;
    }
}