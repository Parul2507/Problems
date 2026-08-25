#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    char current = 'a';
    int r = 0;
    int n = s.length();
    for(int i=0; i<n; i++){
        int diff = abs(current - s[i]);
        r += min(diff, abs(26 - diff));
        current = s[i];
    }
    cout << r << endl;
}