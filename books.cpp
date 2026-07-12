#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int left = 0;
    int sum = 0;
    int ans = 0;

    for(int right = 0; right < n; right++) {
        sum += arr[right];

        while(sum > t) {
            sum -= arr[left];
            left++;
        }

        ans = max(ans, right - left + 1);
    }

    cout << ans << endl;
}