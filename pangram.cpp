#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int num; cin>>num;
    string s;
    cin>>s;
    int c[26] = {0};
    for(int i=0; i<num; i++){
        if(s[i] < 97){
            s[i] = s[i] + 32;
            c[s[i] - 'a'] +=1;
        }else{
            c[s[i] - 'a'] +=1;
        }
    }
    for(int i=0; i<26; i++){
        
        if(c[i] == 0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}