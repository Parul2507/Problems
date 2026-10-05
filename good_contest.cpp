#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        int weak = 0;
        for(int i=0; i<3; i++){
            int x;
            cin >> x;
            weak = n - x;
            ans = max(weak, ans);
        }
        cout << ans << endl;
    }
}