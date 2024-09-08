#include<iostream>

using namespace std;

int main(){
    int x; cin>>x;
    int count1, count2, count3, count4, count5;
    int remain1, remain2, remain3, remain4, remain5;
    count5 = x/5;
    remain5 = x % 5;
    count4 = remain5/4;
    remain4 = count4 %4;
    count3 = remain4/3;
    remain3 = count3%3;
    count2 = remain3/2;
    remain2 = count2%2;
    count1 = remain2/1;
    remain1 = count1%1;
    int count = count1+count2+count3+count4+count5;
    cout << count <<endl;
}