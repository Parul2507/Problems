#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int max_gap = arr[0];
        for (int i = 1; i < n; i++)
        {
            max_gap = max(max_gap, arr[i] - arr[i-1]);
        }

        int fd = 2*(x - arr[n-1]);
        cout << max(max_gap, fd) << endl; 
    }
}