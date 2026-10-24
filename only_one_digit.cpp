#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int y = INT_MAX;
        while(x != 0){
            int ans = x % 10;
            y = min(y, ans);
            x = x / 10;
        }
        cout << y << endl;
    }
}