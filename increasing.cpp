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
        unordered_set <int> s;
        int  x;
        bool dublicate = false;
        for(int i=0; i<n; i++)
        {
            cin >> x;
            if(s.count(x))
            {
                dublicate = true;
            }
            s.insert(x);
        }
        cout << (dublicate ? "No\n" : "YES\n");
    }
}