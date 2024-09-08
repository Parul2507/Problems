#include <iostream>

using namespace std;

int main()
{
    int k, n, w;
    int count = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        count += k * i;
    }
    if (count > n)
    {
        count = count - n;
    }
    else
    {
        count = 0;
    }
    cout << count << endl;
}