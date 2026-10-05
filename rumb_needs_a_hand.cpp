#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a, b;
        for(int i=1; i<=n; i++){
            int x;
            cin >> x;
            if(x != i){
                a.push_back(i);
                b.push_back(x);
            }
        }
        reverse(a.begin(), a.end());
        if(a == b){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}