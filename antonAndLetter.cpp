#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    set<char> mySet;
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            mySet.insert(s[i]);
        }
    }

    cout<<mySet.size()<<endl;
}    