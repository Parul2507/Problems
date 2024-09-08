#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_set<char> uniset;
    for(int i=0; i < s.length(); i++){
        uniset.insert(s[i]);
    }
    if(uniset.size()%2 ==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
}