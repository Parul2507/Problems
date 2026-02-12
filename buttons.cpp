#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a[3];
        for(int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }

        int ann = a[0] + a[2];
        int kat = a[1] + a[2];

        if(ann > kat)
        {
            cout << "First" << endl;
            continue;
        }
        if(kat > ann)
        {
            cout << "Second" << endl;
            continue;
        }
        if(a[2] % 2 != 0)
        {
            cout << "First" << endl;
            continue;
        }
        else
        {
            cout << "Second" << endl;
        }
    }
}