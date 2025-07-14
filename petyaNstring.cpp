#include<iostream>

using namespace std;

int main()
{
    string s1, s2;
    cin>>s1>>s2;

    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i] < 92)
        s1[i] += 32;
    }

    for(int i=0; i<s2.length(); i++)
    {
        if(s2[i] < 92)
        s2[i] += 32;
    }

    if(s1<s2)
    {
        cout<<"-1"<<endl;
    }

    if(s2<s1)
    {
        cout<<"1"<<endl;
    }
    
    if(s1 == s2)
    {
        cout<<"0"<<endl;
    }
}