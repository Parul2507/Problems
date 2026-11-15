#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        int n = a.size();
        vector<char>b;
        for(int i=n-1; i>=0; i--){
            if(a[i] == 'p'){
                a[i] = 'q';
                b.push_back(a[i]);
            }else if(a[i] == 'q'){
                a[i] = 'p';
                b.push_back(a[i]);
            }else{
                b.push_back(a[i]);
            }
        }
        for(auto x : b){
            cout<<x;
        }
        cout << endl;
    }
}