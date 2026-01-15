#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        if (b > a)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        if ((a + b) == c)
        {
            cout<<"+"<<endl;
        }
        else 
        {
            cout<<"-"<<endl;
        }
    }
}