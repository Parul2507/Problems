#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int count = 0;
    int home[n], guest[n];
    for(int i=0; i<n; i++){
        cin>>home[i] >>guest[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(home[i] == guest[j]){
                count++;
            }
        }
    }
    cout<<count<<endl;
}