#include <iostream>
using namespace std;
int main()
{
    int y, w;
    cin >> y >> w;
    int m = max(y, w);
    if(m==1)
    {
        cout << "1/1" << endl;
    }
    else if(m==2)
    {
        cout << "5/6" << endl;
    }
    else if(m==3)
    {
        cout << "2/3" << endl;
    }
    else if(m==4)
    {
        cout << "1/2" << endl;
    }
    else if(m==5)
    {
        cout << "1/3" << endl;
    }
    else if(m==6)
    {
        cout << "1/6" << endl;
    }
}