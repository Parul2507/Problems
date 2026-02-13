#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        int a = (n%10)-1;
        int count = 0;
        while(n > 0)
        {
            count++;
            n /= 10;
        }
        int ans = a*10;
        if(count == 4)
        {
            cout << ans+10 << endl;
            continue;
        }
        else if (count == 3)
        {
            cout << ans+6 << endl;
        }
        else if (count == 2)
        {
            cout << ans+3 << endl;
        }
        else if (count == 1)
        {
            cout << ans+1 << endl;
        }
    }
}