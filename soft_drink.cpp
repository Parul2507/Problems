#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_drink = k * l;
    total_drink = total_drink / nl;
    int total_slice = c * d;
    int total_salt = p / np;

    int ans = min(total_drink, min(total_slice, total_salt)) / n;
    cout<<ans<<endl;
}