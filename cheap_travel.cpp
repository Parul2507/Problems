#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int ans = 0;
    int regular = n * a;
    int ride = m;
    int special = b;
    while(ride < n){
        if(ride+m > n){
            break;
        }
        ride += m;
        special += b;
    }
    // cout << ride << endl;
    if(ride != n && ride < n){
        // cout << ride << endl;
        special += min((n-ride)*a, b);
        // special += (n - ride) * a;
    }
    // cout << regular << endl;
    // cout << special << endl;
    ans = min(special, regular);
    cout << ans << endl;
}