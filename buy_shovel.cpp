#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    int i = 2, count = 1, value = a;
    while(true)
    {
        if (value % 10 == 0)
        {
            cout<<count;
            break;
        }
        if (value % 10 == b)
        {
            cout<<count;
            break;
        }
        value = a * i;
        count++;
        i++;
    }
    return 0;
}