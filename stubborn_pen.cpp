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
        int count = 0;
        if(s[0] == 'B'){
            count += 1;
            // for(int i=1; i<n-1; i++){
            //     if(s[i] == s[i+1]){
            //         count++;
            //     }
            // }
        }
        for(int i=1; i<n; i++){
            if(s[i] == s[i-1]){
                count++;
            }
        }
        // else{
        //     for(int i=0; i<n-1; i++){
        //         if(s[i] == s[i+1]){
        //             count++;
        //         }
        //     }
        // }
        // if(n >= 2 && s[n-2] == s[n-1]){
        //     count++;
        // }
        cout << count << endl;
    }
}