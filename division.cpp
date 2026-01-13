#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
        if (arr[i] <= 1399)
        {
            cout<<"Division 4"<<endl;
        }
        else if (arr[i] >= 1400 && arr[i] <= 1599)
        {
            cout<<"Division 3"<<endl;
        }
        else if (arr[i] >= 1600 && arr[i] <= 1899)
        {
            cout<<"Division 2"<<endl;
        }
        else if (arr[i] >= 1900)
        {
            cout<<"Division 1"<<endl;
        }
    }
}