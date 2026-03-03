#include <bits/stdc++.h>
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
        if(n%2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        string st = "";
        for(char c : s)
        {
            if(!st.empty() && st.back() == c) st.pop_back();
            else st.push_back(c);
        }
        if(st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
