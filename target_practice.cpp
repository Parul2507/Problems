#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char arr[10][10];
        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (arr[i][j] == 'X')
                {
                    if ((j == 0 || j == 9) || (i == 0 || i == 9))
                    {
                        count += 1;
                    }
                    else if ((j == 1 || j == 8) || (i == 1 || i == 8))
                    {
                        count += 2;
                    }
                    else if ((j == 2 || j == 7) || (i == 2 || i == 7))
                    {
                        count += 3;
                    }
                    else if ((j == 3 || j == 6) || (i == 3 || i == 6))
                    {
                        count += 4;
                    }
                    else if ((j == 4 || j == 5) || (i == 4 || i == 5))
                    {
                        count += 5;
                    }
                }
            }
        }
        cout << count << endl;
    }
}