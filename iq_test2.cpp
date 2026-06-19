#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, lastodd = 0, lasteven = 0, even = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        if (x % 2 == 0)
        {
            even++;
            lasteven = i;
        }
        else
        {
            even--;
            lastodd = i;
        }
    }
    cout << (even > 0 ? lastodd : lasteven) << endl;
}