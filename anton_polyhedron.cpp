#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int count = 0;
    while (t--)
    {
        string shape;
        cin >> shape;
        if (shape[0] == 'T')
        {
            count = count + 4;
        }
        else if (shape[0] == 'C')
        {
            count = count + 6;
        }
        else if (shape[0] == 'O')
        {
            count = count + 8;
        }
        else if (shape[0] == 'D')
        {
            count = count + 12;
        }
        else if (shape[0] == 'I')
        {
            count = count + 20;
        }
    }
    cout << count << endl;
}