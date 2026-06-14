#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.length();
    string str;
    string comp = "hello";
    int j = 0;
    for(int i=0; i<n; i++){
        if(s[i] == comp[j]){
            j++;
        }
        if(j == 5){
            break;
        }
    }
    cout << (j == 5 ? "YES" : "NO") << endl;
}