#include <iostream>
using namespace std;
bool isPrime (int x)
{
    if (x < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a+1; ; i++)
    {
        if (isPrime(i))
        {
            if (i == b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            break;
        }
    }
}