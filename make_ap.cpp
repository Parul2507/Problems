#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if((b-a) == (c-b)){
            cout << "YES" << endl;
        }
        else if((2*b-c) % a == 0 && (2*b - c)/a > 0){
            cout << "YES" << endl;
        }
        else if((a+c) % (2*b) == 0 && (a+c)/(2*b) > 0){
            cout << "YES" << endl;
        }
        else if((2*b-a) % c == 0 && (2*b-a)/c > 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}