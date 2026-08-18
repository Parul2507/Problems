#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());     
        // bool found = true;  
        // for(int i=0; i<n; i++){
        //     if(s[i] != t[i]){
        //         found = false;
        //         break;
        //     }
        // }
        // if(found){
        //     cout << "YES" << endl;
        // }else{
        //     cout << "NO" << endl;
        // }
        if(s == t){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}