#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = s.length();
    int upper = 0, lower = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    if (upper > lower)
    {
        for(int i=0; i<s.length(); i++){
          cout << (char)toupper(s[i]);
        }
        cout<<endl;
    }
    if (upper == lower)
    {
        for(int i=0; i<s.length(); i++){
          cout << (char)tolower(s[i]);
        }
        cout<<endl;
    }
    if (upper < lower)
    {
        for(int i=0; i<s.length(); i++){
          cout << (char)tolower(s[i]);
        }
        cout<<endl;
    }
}