#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 1;
        for(int i=1; i<n; i++){
            if(s[i] != s[i-1]) ans++;
        }
        int minus = 0;
        for(int i=1; i<n-1; i++){
            if(s[i] != s[i-1] && s[i] != s[i+1]){
                if(s[i-1] == s[i+1]) minus = 2;
                else minus = max(minus, 1);
            }
        }

        ans -= minus;
        cout << ans << endl;
    }
}
