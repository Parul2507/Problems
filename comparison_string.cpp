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
        int a = n*2;
        int count = 1;
        int longest = 1;
        for(int i=1; i<n; i++){
            if(s[i] == s[i-1]){
                count++;
            }else{
                count = 1;
            }
            longest = max(count, longest);
        }
        cout << longest+1<< endl;
    }
}