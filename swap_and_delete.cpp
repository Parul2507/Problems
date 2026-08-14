#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int count_a = 0, count_b = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '0'){
                count_a++;
            }else{
                count_b++;
            }
        }
        // cout << count_a << " " << count_b << endl;
        int string_size = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '0' && count_b > 0){
                count_b--;
                string_size++;
            }else if(s[i] == '1' && count_a > 0){
                count_a--;
                string_size++;
            }else{
                break;
            }
        }
        cout << s.size() - string_size << endl;
    }
}