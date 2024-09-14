#include<iostream>
using namespace std;

int main(){
    int n, t;
    cin>> n >> t;
    string que;
    cin >> que;
    while(t!=0){
        for(int i = 0; i<que.length(); i++){
            if(que[i] == 'B' && que[i+1] == 'G'){
                que[i+1] = 'B';
                que[i] = 'G';
                i++;
            }
        }
        t--;
    }
    cout << que <<endl;
}