#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        int op;
        cin>> a >> b;
        c = (a+b)/2;
        op = (c - a) + (b - c);
        cout<< op <<endl;
    }
}