#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int score = 0;
        if(abs(a-b) < abs((a+c)-b)){
            a = a + c;
            c = 0;
        }
        else if(abs(a-b) > abs((b+c)-a)){
            b = b + c;
            c = 0;
        }
        score = abs(a - b);
        cout << score << endl;
    }
}