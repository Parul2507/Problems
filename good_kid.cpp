#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector <int> a(n);
        for(auto &x : a)
        {
            cin >> x;
        }

        int indx = min_element(a.begin(), a.end()) - a.begin(); //min_element() returns iterator so to get the index of min value we are substratiing
        // we could have also done (*min_element(a.begin(), a.end())++);
        
        a[indx]++;
        long long product = 1;
        for(int i=0; i<n; i++)
        {
            product *= a[i];
        }
        cout << product << endl;
    }
}
