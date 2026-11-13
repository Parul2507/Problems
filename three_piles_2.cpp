#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a+1 == b && b+1 == c){
            cout << "YES" << endl;
        }
        else{
            cout<< "NO" << endl;
        }
    }
}