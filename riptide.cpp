#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int arr[3];
        for(int i=0; i<3; i++){
            cin >> arr[i];
        }
        if(arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2]){
            cout << 0 << endl;
        }
        else{
            sort(arr, arr+3);
            int count=0;
            int smallest = arr[0];
            int largest = arr[2];
            while(largest != arr[1]){
                largest -= 1;
                smallest += 1;
                count++;
                if(smallest == arr[1]){
                    break;
                }
            }
            cout << count << endl;
        }
    }
}