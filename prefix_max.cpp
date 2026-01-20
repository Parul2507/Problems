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
        int arr[n];
        for(int i = 0; i < n ; i++)
        {
            cin>>arr[i];
        }
        int maximum = arr[0];
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] > maximum)
            {
                maximum = arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            result += maximum;
        }
        cout << result <<endl;
    }
}