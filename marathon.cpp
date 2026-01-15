#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b,c ,d;
        cin>>a>>b>>c>>d;
        int front = 0;
        if (a > b && a > c && a > d)
        {
            front = 0;
        }
        if (a < b)
        {
            front++;
        }
        if (a < c)
        {
            front++;
        }
        if (a < d)
        {
            front++;
        }
        cout<<front<<endl;
    }
}