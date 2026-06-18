#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a=0, b=0, c=0, d=0, count=0;
    while(n--){
        int t;
        cin >> t;
        if(t == 1){
            a += 1;
        }else if(t == 2){
            b += 1;
        }else if(t == 3){
            c += 1;
        }else{
            d += 1;
        }
    }
    count += d;

    if(c >= a){
        count += a;
        c = c-a;
        a=0;
    }else if(c < a){
        count += c;
        a = a-c;
        c=0;
    }
    if(c > 0){
        count += c;
        c=0;
    }
    if(b > 0){
        count += b/2;
        b = b%2;
    }
    int left = a + (b*2);
    if(left <= 4 && left != 0){
        count += 1;
    }else if (left%4  != 0){
        count  += (left/4)+1;
    }else{
        count += left/4;
    }
    cout << count << endl;
}