#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int sum1 = 0, sum2 = 0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 1) sum1++;
            else sum2 += 2;
        }
        int total = sum1+sum2;
        if(total%2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        int target = total/2;
        if(target%2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if(sum1 > 0)
            {
                cout << "YES"<< endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}