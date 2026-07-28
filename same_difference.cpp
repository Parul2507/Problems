#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, int> mp;
        long long ans=0;
        for(int i=1; i<=n; i++){
            int x;
            cin >> x;
            int val = x-i;
            ans += mp[val];
            mp[val]++;
        }
        cout << ans << endl;
    }
}