#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int i=0, j=0;
        int white = 0;
        int mini = n;
        while(j<n){
            if(s[j] == 'W'){
                white++;
            }
            if(j-i+1 < k){
                j++;
                continue;
            }
            mini = min(mini, white);
            j++;
            if(s[i] == 'W'){
                white--;
            }
            i++;
        }
        cout << mini << endl;
    }
}