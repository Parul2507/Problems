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
        int count = 0;
        while(n>=4)
        {
            count++;
            n -= 4;
        }
        while(n>0)
        {
            count++;
            n -= 2;
        }
        cout << count << endl;
    }
}