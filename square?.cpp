#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int arr[4];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        if(arr[0] == arr[1] && arr[0] == arr[2] && arr[0] == arr[3])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}