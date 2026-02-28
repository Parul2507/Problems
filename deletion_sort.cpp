#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        bool istrue = false;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i] > arr[i+1])
            {
                cout << 1 << endl;
                istrue = true;
                break;
            }
        }
        if(!istrue)
        {
            cout << n << endl;
        }
    }
}