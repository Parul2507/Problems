#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long denominator = 3;
        while(true){
            if(n % denominator == 0){
                cout << n / denominator << endl;
                break;
            }
            denominator = denominator * 2 + 1;
        }
    }
}