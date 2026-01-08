#include <iostream>

using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;

    int ans = 0;
    while (k <= 240 && ans != n)
    {
        int x = (ans + 1) * 5;
        k = k + x;
        if (k <=240)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}