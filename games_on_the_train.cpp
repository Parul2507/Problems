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
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        bool allequal = true;
        for(int i=0; i<n-1; i++){
            if(arr[i] != arr[i+1]){
                allequal = false;
                break;
            }
        }
        if(allequal){
            cout << 1 << endl;
        }else{
            sort(arr, arr+n);
            int smallest = arr[0];
            int largest = arr[n-1];
            int ans = (largest-smallest)+1;
            cout << ans << endl;
        }
    }
}