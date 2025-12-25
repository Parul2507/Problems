#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string a, b, c;
    cin>>a>>b>>c;

    string final = a+b;

    sort(final.begin(),final.end());
    sort(c.begin(),c.end());
    if(final == c)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}