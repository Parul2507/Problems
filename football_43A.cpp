#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string, int> mp;
    while(n--){
        string team;
        cin >> team;
        mp[team]++;
    }
    int maxi = 0;
    string win;
    for(auto x : mp){
        if(x.second > maxi){
            maxi = x.second;
            win = x.first;
        }
    }
    cout << win << endl;
}