#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char a[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            count = 2;
        }
        else
        {
            bool repeat[26] = {false};
            for (int i = 0; i < n; i++)
            {
                if(repeat[a[i] - 'A'])
                {
                    count += 1;
                }
                else
                {
                    count += 2;
                    repeat[a[i] -'A'] = true;
                }
            }  
        }
        cout << count << endl;
    }
}