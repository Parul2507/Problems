#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    vector <int> array;
    int count = 0;
    int carry = 0;
    sort(arr, arr+n);
    for(int i=0; i<n; i++)
    {
        if(carry == m)
        {
            break;
        }
        if(arr[i] < 0)
        {
            count = count + arr[i];
            carry++;
        }
    }
    cout << abs(count) << endl;
}