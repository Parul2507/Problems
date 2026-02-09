#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector <int> p, m, pe;

    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if(x == 1) p.push_back(i);
        else if (x == 2) m.push_back(i);
        else pe.push_back(i);
    }

    int team = min(p.size(), min(m.size(), pe.size()));
    cout << team << endl;
    for (int i = 0; i < team; i++)
    {
        cout << p[i] << " " << m[i] << " " << pe[i] << endl;
    }
}