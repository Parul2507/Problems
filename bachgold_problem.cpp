#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> arr;
    if(n%2==0)
    {
        while(n > 0)
        {
            arr.push_back(2);
            n -= 2;
        }
    }
    else
    {
        arr.push_back(3);
        n -= 3;
        while (n > 0)
        {
            arr.push_back(2);
            n -= 2;
        }
        
    }
    cout << arr.size() << endl;
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}