#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index = 0;
    if (arr[0] % 2 == 0 && arr[n - 1] % 2 == 0)
    {

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                index = i + 1;
                break;
            }
        }
    }
    else if (arr[0] % 2 != 0 && arr[n - 1] % 2 != 0)
    {

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                index = i + 1;
                break;
            }
        }
    }
    else
    {
        if (arr[1] % 2 == 0 && arr[n - 1] % 2 == 0)
        {
            index = 1;
        }
        else if (arr[1] % 2 != 0 && arr[n - 1] % 2 != 0)
        {
            index = 1;
        }
        else
        {
            index = n;
        }
    }
    cout << index << endl;
}