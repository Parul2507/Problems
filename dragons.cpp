#include<bits/stdc++.h>
using namespace std;
int main(){
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> p(n);
    bool defeated= true;
    for(int i=0; i<n; i++){
        cin >> p[i].first >> p[i].second;   
    }
    sort(p.begin(), p.end());
    for(int i=0; i<n; i++){
        if(s <= p[i].first){
            defeated = false;
            break;
        }else{
            s += p[i].second;
        }
    }
    // cout << s << endl;
    if(defeated){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}