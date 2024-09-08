#include <iostream>

using namespace std;

int main()
{
    int n;
    string stat;
    cin >> n;
    int x = 0;
    while (n != 0)
    {
        cin >> stat;
        if (stat == "++X")
        {
            ++x;
        }
        else if (stat == "X++")
        {
            ++x;
        }
        else if (stat == "--X")
        {
            --x;
        }
        else if (stat == "X--")
        {
            --x;
        }
        n--;
    }
    cout << x << endl;
}