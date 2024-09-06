#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int pos[n];
        for (int i = 0; i < n; i++)
        {
            string notes;
            cin >> notes;

            if (notes == "#...")
            {
                pos[i] = 1;
            }
            else if (notes == ".#..")
            {
                pos[i] = 2;
            }
            else if (notes == "..#.")
            {
                pos[i] = 3;
            }
            else if (notes == "...#")
            {
                pos[i] = 4;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout << pos[i] << " ";
        }
        cout<<endl;
    }
}