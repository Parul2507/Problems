#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool found = true;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            i = i+2;
            if(!found)
            {
                cout << " ";
            }
        }
        else
        {
            cout<<s[i];
            found = false;
        }
    }
}