#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        int sum = 0;
        vector<int> ans;
        if(x != 1){
            for(int i = 0; i < n; i++){
                ans.push_back(1);
            }
        }else if(k == 1){
            cout << "NO\n";
            continue;
        }else if(n % 2 == 0){
            for(int i = 0; i < n/2; i++){
                ans.push_back(2);  
            }
        }
        else if(k >= 3){
            ans.push_back(3);
            for(int i=0; i< (n-3)/2; i++){
                ans.push_back(2);
            }
        }
        else{
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        cout << ans.size() << endl;
        for(auto it : ans){
            cout << it << " ";
        }
        cout << endl;
    }   
}