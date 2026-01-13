#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    while (n--)
    {
        string s;
        cin>>s;

        int sum1 = 0;
        int sum2 = 0;

        sum1 = s[0] + s[1] + s[2]; 
        sum2 = s[3] + s[4]+ s[5];

        if (sum1 == sum2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}