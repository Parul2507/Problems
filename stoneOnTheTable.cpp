#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    char pre;
    cin>>pre;
    char curr;
    int a=0;
    for(int i=0; i<n-1; i++){
        cin>>curr;
        if(curr==pre){
            a++;
            pre=curr;
        }else{
            pre=curr;
        }
    }
    cout<<a<<endl;
    return 0;
}