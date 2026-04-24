#include<bits/stdc++.h>
using  namespace std;
int main()
{
    char a;
    cin >> a;
    string s1;
    cin >> s1;
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    int len = s1.length();
    string ans;
    for(int i=0; i<len; i++)
    {
        int indx = s.find(s1[i]);
        if(a == 'R')
        {
            ans += s[indx-1];
        }
        else
        {
            ans += s[indx+1];
        }
    }
    cout << ans << endl;
}