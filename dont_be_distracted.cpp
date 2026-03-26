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
        vector <char> arr(n);
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        map <char, int> mp;
        bool flag = true;
        for(int i=0; i<n; i++)
        {
            mp[arr[i]]++;
            if(mp[arr[i]] > 1 && arr[i-1] != arr[i])
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}