#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int b = 0;
        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                b = 0;
            }
            else
            {
                b++;
                maxi = max(b,maxi); 
            }
        }

        cout << maxi << endl;
    }
}