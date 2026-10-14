#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        int max_number = a[n-1];
        int min_number = a[0];
        if(max_number == min_number){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            cout << max_number << " ";
            for(int i=0; i<n-1; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}