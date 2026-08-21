#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int hour = a;
    while(a >= b){
        int newCandle = a/b;
        int remain = a % b;

        hour += newCandle;
        
        a = newCandle + remain;
    }
    cout << hour << endl;
}