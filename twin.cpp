#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int total = 0;
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }
    int count = 0;
    int half = total/2;
    sort(arr,arr+n);
    for(int i=n-1; i>=0; i--)
    {
        sum += arr[i];
        count++;
        if(sum > half)
        {
            break;
        }
    }
    cout << count << endl;
}