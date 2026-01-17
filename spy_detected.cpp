#include <iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int num;
        if (arr[0] == arr[1])
        {
            num = arr[0];
        }
        else
        {
            num = arr[2];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != num)
            {
                cout << i+1 << endl;
            }
        }
    }
}