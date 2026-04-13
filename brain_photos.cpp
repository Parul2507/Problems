#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    char matrix[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int co = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(matrix[i][j] == 'B' || matrix[i][j] == 'W' || matrix[i][j] == 'G')
            {
                co++;
            }
        }
    }
    if(co == (n*m))
    {
        cout << "#Black&White" << endl;
    }
    else
    {
        cout << "#Color" << endl;
    }
}