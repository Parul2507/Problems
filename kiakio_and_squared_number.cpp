#include<bits/stdc++.h>
using namespace std;

long long cal(int x){
    long long sum = 0;
    while(x){
        long long digi = x%10;
        sum += digi * digi;
        x /= 10;
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        map<long long, long long> mp;
        for(long long i=0; i<n; i++){
            long long x;
            cin >> x;
            for(long long j=0; j<10000; j++){
                x = cal(x);
            }
            mp[x]++;
        }
        long long ans = 0;
        for(auto q : mp){
            long long count = q.second;
            if(count > 1){
                ans += (count * (count -1)/2);
            }
        }
        cout << ans << endl;
    }
}