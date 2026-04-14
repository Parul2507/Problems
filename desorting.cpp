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
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        if(!is_sorted(arr, arr+n))
        {
            cout << 0 << endl;
        }
        else
        {
            int diff = INT_MAX;
            for(int i=1; i<n; i++)
            {
                diff = min(diff, arr[i] - arr[i-1]);
            }
            int op = diff/2 + 1;
            cout << op << endl;
        }
    }
}    