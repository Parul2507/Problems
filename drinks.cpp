#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n; cin >> n;
    double drinks = 0;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        drinks+=arr[i];
    }
    double org = drinks / n;
    cout<<fixed<<setprecision(12)<<org<<endl; 
}