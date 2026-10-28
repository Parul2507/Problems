#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        int ans = min(2 * a, b) * (n/2) + a *(n%2);
        cout << ans << endl;
    }
}