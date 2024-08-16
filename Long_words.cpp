#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string words;
    for (int i = 0; i < n; i++)
    {
        cin >> words;
        int length = words.length();
        if (length > 10)
        {
            cout << words[0] << words.length() - 2 << words[length - 1] << endl;
        }
        else
        {
            cout << words << endl;
        }
    }
}