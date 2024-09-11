#include <iostream>
#include <string>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    string temp;
    for(int i=s.length() - 1; i>=0; i--){
        temp +=  s[i];
    }
    if(temp == t){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    
}