#include<bits/stdc++.h>
using namespace std;
bool isperfectSquare(long long n)
{
    // Binary search
    // if(n < 0) return false;
    // if(n <= 1) return true;

    // long long left = 1, right = n;
    // while(left <= right)
    // {
    //     long long mid = (left + right)/2;
    //     long long square = mid * mid;

    //     if(square == n) return true;
    //     if(square < n) left = mid+1;
    //     else right = mid - 1;
    // } 
    // return false;
    long long temp  = sqrt(n);
    if(temp*temp == n) return true;

    return false;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long sum=0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >>x;
            sum += x;
        }
        cout << (isperfectSquare(sum) ? "YES\n" : "NO\n");
    }

}
