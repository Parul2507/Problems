#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int count_z = count(s.begin(), s.end(), '0');
        int count_o = s.size() - count_z;
        int total_moves = min(count_o, count_z);
        if(total_moves % 2 == 0){
            cout << "NET" << endl;
        }else{
            cout << "DA" << endl; 
        }
    }
}