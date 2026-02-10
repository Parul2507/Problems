#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n % 4 != 0)
        {
            cout << "NO" << endl;
                continue;
        }
                
        cout <<"YES" << endl;
        int x = n/2;
        int sumeven = 0, sumodd = 0;
        for(int i = 1; i<= x; i++)
        {
            cout << 2*i << " ";
            sumeven += 2*i;
        }
        for(int i = 1; i < x; i++)
        {
            cout << 2*i-1 << " ";
            sumodd += (2*i-1);
        }

        cout << sumeven - sumodd << endl;
    }
}