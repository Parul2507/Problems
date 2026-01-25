#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    int l = 0;
    int r = t - 1;
    int sereja = 0;
    int deema = 0;
    for (int i = 0; i < t; i++)
    {
        if (arr[l] > arr[r])
        {
            if (i % 2 == 0)
            {
                sereja = sereja + arr[l];
                l++;
            }
            else
            {
                deema = deema + arr[l];
                l++;
            }
        }
        else
        {
            if (i % 2 == 0)
            {
                sereja = sereja + arr[r];
                r--;
            }
            else
            {
                deema = deema + arr[r];
                r--;
            }
        }
    }
    cout << sereja << " " << deema << endl;
}