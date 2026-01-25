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
    int best = arr[0];
    int worst = best;
    int count = 0;
    for (int i = 1; i < t; i++)
    {
        if (arr[i] < worst)
        {
            worst = arr[i];
            count++;
        }
        else if (arr[i] > best)
        {
            best = arr[i];
            count++;
        }
    }
    cout << count << endl;
}