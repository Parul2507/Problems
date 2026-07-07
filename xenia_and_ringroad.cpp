#include<bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    int initial = 1;
    long long ans = 0;
    while(n--){
        int present;
        cin >> present;
        if(present >= initial){
            ans += present - initial;
        }else{
            ans += m - (initial - present);
        }
        initial = present;
    }
    cout << ans << endl;
}