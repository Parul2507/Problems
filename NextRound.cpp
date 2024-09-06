#include<iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int k; cin >> k;
    int count = 0;
    int score[n];
    for(int i=0; i<n; i++){
        cin>>score[i];
    }
    for(int i=0; i<n; i++){
        if(score[i]>= score[k-1] && score[i] > 0){
            count++;
        }  
    }
    cout<<count<<endl;
}