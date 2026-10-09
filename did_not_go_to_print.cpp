#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> memory;
        vector<int> printed(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            if (s[i - 1] == '1') {
                memory.push_back(i);
            }
            else if (s[i - 1] == '2') {
                if (!memory.empty()) {
                    int x = memory.back();
                    memory.pop_back();

                    printed[x] = 1;
                }
                else {
                    printed[i] = 1;
                }
            }
            else if (s[i - 1] == '3') {
                printed[i] = 1;
            }
        }
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (printed[i] == 0) {
                count++;
            }
        }
        cout << count << endl;

        for (int i = 1; i <= n; i++) {
            if (printed[i] == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}