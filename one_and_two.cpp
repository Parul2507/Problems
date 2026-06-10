#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int sum = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i] == 2;
        }
        bool found = false;
        int total = 0;
        for(int i=0; i<n; i++){
            total += arr[i] == 2;
            if(total == sum - total){
                cout << i+1 << endl;
                found = true;
                break;
            }
        }
        if(!found){
            cout << -1 << endl;  
        }
    }
}