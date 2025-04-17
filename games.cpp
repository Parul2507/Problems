#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int count = 0;
    int a[n][2];
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin>>a[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][0] == a[j][1]){
                count++;
            }
        }
    }
    cout<<count<<endl;
}