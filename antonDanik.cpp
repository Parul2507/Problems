#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count1 = 0, count2 = 0;
    for(int i=0; i<n; i++){

        if(s[i] == 'A'){
            count1++;
        }else{
            count2++;
        }
    }
    if(count1>count2){
        cout<<"Anton\n";
    }
    if(count1<count2){
        cout<<"Danik\n";
    }
    if(count1 == count2){
        cout<<"Friendship\n";
    }
}