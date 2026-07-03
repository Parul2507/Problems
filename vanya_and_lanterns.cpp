#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, l;
    cin >> n >> l;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int diff = 1;
    for(int i=1; i<n; i++){
        diff = max(diff, arr[i]-arr[i-1]);
    }
    double ans = max({(double) arr[0],(double)(l - arr[n-1]), diff/2.0});
    cout << fixed << setprecision(10) << ans << endl;
}