#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector <int> arr(4);
        for(int i=0; i<4; i++)
        {
            cin >> arr[i];
        }
        int a = max(arr[0], arr[1]);
        int b = max(arr[2], arr[3]);

        sort(arr.begin(), arr.end());
        if((arr[2] == a || arr[2] == b) && (arr[3] == a  || arr[3] == b))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}