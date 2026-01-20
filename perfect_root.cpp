#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        while (x !=  0)
        {
            cout << x << " ";
            x--;
        }
        cout << endl;
    }
}