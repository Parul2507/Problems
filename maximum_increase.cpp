#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int maxi = 1;
    int maxiL = 0;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i] < arr[i+1])
        {
            maxi++;
        }
        else
        {
            maxiL = max(maxi, maxiL);
            maxi = 1;
        }
    }
    maxiL = max(maxi, maxiL);
    cout << maxiL << endl;
}