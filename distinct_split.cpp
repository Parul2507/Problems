#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_set<char> st;
        vector<int> prefix_count(n+1, 0);
        vector<int> suffix_count(n+1, 0);
        for(int i=1; i<=n; i++){
            st.insert(s[i-1]);
            prefix_count[i] = st.size();
        }
        st.clear();
        for(int i=n; i>=1; i--){
            st.insert(s[i-1]);
            suffix_count[i] = st.size();
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            ans = max(ans, prefix_count[i] + suffix_count[i+1]); 
        }
        cout << ans << endl;
    }
}