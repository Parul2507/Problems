#include <iostream>

using namespace std;

int main()
{
    int n;
    int count = 0;
    cin>> n;
    int a ,b ,c;
    while(n != 0){
        cin >> a >> b >> c;
        if(a+b ==2 || b+c == 2 || c+a ==2){
            count++;
        }
        n--;
    }
    cout << count <<endl;
}
    