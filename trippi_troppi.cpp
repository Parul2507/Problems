#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        getline(cin >> ws, s);
        // cout << s << endl;
        // cout << s.length() << endl;
        int n = s.length();
        vector <char> vec;
        int i=1;
        vec.push_back(s[0]);
        while(i < n)
        {
            if(s[i] == ' ')
            {
                i++;
                // cout << i << " "; 
                vec.push_back(s[i]);
            }
            i++;
        }
        for(auto x : vec)
        {
            cout << x;
        }
        cout << endl;
    }
}