#include <iostream>
using namespace std;
int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    string s;
    cin >> s;
    int n = s.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count += arr[s[i] - '1'];     
    }
    cout << count << endl;
}