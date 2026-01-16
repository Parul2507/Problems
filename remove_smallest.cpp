#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count = n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        if (n == 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                for( int j = 0; j < n - i - 1; j++)
                if (arr[j] > arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
            for (int i = 0; i < n - 1; i++)
            {
                if((arr[i+1] - arr[i]) <=1)
                {
                    count--;
                }
                else
                {
                    count++;
                }
            }
            if (count == 1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
        
    }
}