#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int ans = INT_MAX;
    for(int i=0; i<n; i++){
        int t;
        cin >> t;
        if(t == 0){
            ans = 0;
            break;
        }
        ans = min(ans, abs(t));
    }
    cout << ans << endl;
}