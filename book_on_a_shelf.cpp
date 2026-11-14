#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<int> l, r, m;
        int k=0;
        int i=0;
        while(i<n){
            int j=i;
            while(j<n && a[j]==a[i]){
                j++;
            }
            int f = j-i;
            k+=min(f,2);
            l.push_back(a[i]);
            f--;
            if(f>0){
                r.push_back(a[i]);
                f--;
            }
            while(f>0){
                m.push_back(a[i]);
                f--;
            }
            i=j;
        }
        
        cout << k << endl;
        for(auto x:l) cout << x << " ";
        for(auto x:m) cout << x << " ";
        for(int i=r.size()-1; i>=0; i--){
            cout << r[i] << " ";
        }
        cout << endl;
    }
}