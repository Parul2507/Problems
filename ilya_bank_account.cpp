#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        cout << n << endl;
    }
    else
    {
        int temp = abs(n);
        // if (temp % 10 != 0)
        // {
        //     temp = temp / 10;
        //     cout << temp << endl;
        // }
        int last = temp % 10;
        temp = temp / 10;
        int max = temp % 10;
        // cout << max << endl;
        // cout << last << endl;
        if (last >= max)
        {
            n = n / 10;
            cout << n << endl;
        }
        if (max > last)
        {
            n = n / 10;
            if (n == (max * -1))
            {
                if(n == 0)
                {
                    cout << 0 << endl;
                    return 0;
                }
                cout << (last * -1) << endl;
                return 0;
            }
            n = n / 10;
            // if (n == 0)
            // {
            //     cout << 0 << endl;
            // }
            cout << n << last << endl;
        }

        // else
        // {
        //     cout << temp << 0 << endl;
        // }
    }
}