#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;

    vector<long long> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    long long m;
    cin >> m;

    vector<long long> mar(m);
    for(int i=0; i<m; i++){
        cin >> mar[i];
    }

    for(int i=1; i<n; i++){
        arr[i] += arr[i-1];
    }
    for(auto x : mar){
        int indx = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        cout << indx+1 << endl;
    }
}