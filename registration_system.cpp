#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    map<string, int> mp;
    string s;
    while(t--){
        cin >> s;
        if(mp.count(s) == 0){
            cout << "OK" << endl;
            mp[s] = 1;
        }else{
            cout << s << mp[s] << endl;
            mp[s] += 1;
        }
    }
}
