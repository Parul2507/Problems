#include<iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cin>>a>>b;
    cin>>c>>d;

    for(int i=a; i<=b; i++){
        for(int j=c; j<=d; j++){
            if(j == d){
               cout<<i<<"*"<<j<<"="<<i*j; 
            }else{
            cout<<i<<"*"<<j<<"="<<i*j<<","<<" ";
            }
        }
        cout<<endl;
    }
}