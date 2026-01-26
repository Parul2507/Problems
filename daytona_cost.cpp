#include <iostream>
using namespace std;
int main()
{
    int t ;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == a)
            {
                count++;
            }
        }
        if (count == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}