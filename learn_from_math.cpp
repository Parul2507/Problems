#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b;
    if (n % 2 == 0)
    {
        a = n - 6;
    }
    else
    {
        a = n - 9;
    }
    b = n - a;
    cout << a << " " << b << endl;
}