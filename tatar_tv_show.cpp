#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<long long> count(n, 0);    
        // count will store the count of 1 for particular value of i
        for(long long i=0; i<n; i++){
            if(s[i] == '1'){
                count[i%k]++;
            }
        }
        bool found = true;
        for(long long i=0; i<n; i++){
            if(count[i]%2 == 1){
                cout << "NO" << endl;
                found = false;
                break;
            }
        }
        if(found){
            cout << "YES" << endl;
        }
    }
}