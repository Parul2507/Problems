#include<iostream>

using namespace std;
int main(){
    long long n; cin>>n;
    long long count;
    // for(int i=1; i<=n; i++){
    //     count +=i;
    // }
    // int remain = count % n;
    // int quit = count /n;

    // if(remain == 0){
    //     cout<<"-"<<quit<<endl;
    // }else{
    // cout<<quit<<endl;
    // }
    if(n%2 == 0){
        count = n/2;
    }else{
        count = ((n+1)/2)*(-1);
    }
    cout<< count <<endl;
}