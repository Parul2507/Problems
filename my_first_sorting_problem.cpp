#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        int a = min(x, y);
        int b = max(x,y);
        cout << a << " " << b << endl;
    }
}