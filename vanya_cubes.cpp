#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    int height = 0;
    if(n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    for(int i = 1, a = sqrt(n); i <= a ; i ++)
    {
        count += (i*(i+1))/2;
        if(count <= n)
        {
            height += 1;
        }
    }
    cout << height << endl;
}