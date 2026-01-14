#include <iostream>
using namespace std;\
int main()
{
    int a, b;
    cin>>a>>b;

    int diff = 0;
    int same = 0;
    
    if(a<b)
    {
        diff = a;
    }
    else
    {
        diff = b;
    }
    a = a - diff;
    b = b - diff;
    while(a>1)
    {
        same++;
        a = a - 2;
    }
    while(b>1)
    {
        same++;
        b = b - 2;
    }

    cout<<diff<<" "<<same;

}