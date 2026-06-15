#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a = n;
    bool lucky = true;
    while(a != 0){
        int b = a % 10;
        if(b == 4 || b == 7){
            a = a / 10;
        }
        else{
            lucky = false;
            break;
        }
    }
    if(lucky){
        cout << "YES" << endl;
    }else{
        if (n%4 == 0 || n%7 == 0 || n%47 == 0 || n%74 == 0 || n%477 == 0 || n%774 == 0 || n%44 == 0 || n%77 == 0 || n%474 == 0 || n%777 == 0 || n%444 == 0 || n%744 == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}