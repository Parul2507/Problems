#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long x;
        cin >> x;
        // long long pos = 0, neg = 0;
        // for(long long i=1; i<=x; i++){
        //     if(x % i == 0){
        //         if(i % 2 == 0){
        //             pos++;
        //         }
        //         else{
        //             neg++;
        //         }
        //     }
        // }
        // // cout << pos << " " << neg << endl;
        // if(neg == pos){
        //     cout << "NO" << endl;
        // }
        // else{
        //     cout << "YES" << endl;
        // }
        if(x%2==0 && x%4!=0){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }
}