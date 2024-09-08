#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string emp;
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
        {
            emp += s[i];
        }
    }
    sort(emp.begin(), emp.end());
    for (int i = 0; i < emp.length()-1; i++)
    {
        cout << emp[i] << "+";
    }
    cout << emp.back();
    cout<< endl;
}