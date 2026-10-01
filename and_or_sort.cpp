#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int zeroRight = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '0'){
                zeroRight++;
            }
        }
        if(s[0] == '1'){
            cout << zeroRight << endl;
            continue;
        }
        int onesLeft = 0;
        int ans = INT_MAX;
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                onesLeft++;
            }
            else{
                zeroRight--;
            }
            int cost = onesLeft + zeroRight;
            ans = min(cost, ans);
        }
        cout << ans << endl;
    }
}