#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int max = 0, min = 100;
    int minindex=0, maxindex=0;
    int a;
    for(int i=1; i<=n; i++){
        cin>>a;
        if(a>max){
            maxindex = i;
            max = a;
        }
        if(a<=min){
            minindex = i;
            min = a;
        }
    }
    if(maxindex > minindex){
        cout<<(maxindex - 1)+(n - minindex) - 1<<endl;
    }else{
        cout<<(maxindex - 1)+(n - minindex)<<endl;
    }

}