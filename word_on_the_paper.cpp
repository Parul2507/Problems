#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char grid[8][8];
        for(int i=0; i<8; i++)
        {
            string row;
            cin >> row;
            for(int j=0; j<8; j++)
            {
                grid[i][j] = row[j];
            }
        }
        string word;
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                if(grid[i][j] != '.')
                {
                    word += grid[i][j];
                }
            }
        }
        cout << word << endl;
    }
}