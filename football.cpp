#include<bits/stdc++.h>
using namespace std;
string checking(string &s)
{
    int n = s.length();
    int count = 0;
    for(int i=0; i<n-1; i++)
    {
        if(s[i] == s[i+1])
        {
            count++;
            if(count == 6)
            {
                return "YES";
                break;
            }
        }
        else 
        {
            count = 0;
        }
    }
    return "NO";
}
int main()
{
    string s;
    cin >> s;
    cout << checking(s) << endl;
}    
