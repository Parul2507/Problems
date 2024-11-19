#include<iostream>
#include<string>

using namespace std;

int main(){
    int test; cin>>test;
    while(test--){
        int a, b;
        cin>>a>>b;

        int r;
        r= a%b; 
        int count;
        if(a%b == 0){
            count = 0;
        }else{
        count = b - r;
        }
        cout<<count<<endl;
        
    }
}