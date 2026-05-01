#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int letters = 0;
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            letters = s[i] - 'a';
            ans = max(ans, letters);
        }
        cout << (ans+1) << endl;
    }
}