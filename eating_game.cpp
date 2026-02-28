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

        vector<int> arr(n);

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        int maximum = *max_element(arr.begin(), arr.end());

        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == maximum)
                count++;
        }

        cout << count << endl;
    }
}