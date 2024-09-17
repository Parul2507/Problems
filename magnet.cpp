#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    string mag[n];
    int p = 0;
    int q = 0;
    for(int i=0; i<n; i++){
        cin>> mag[i];
    }
    for(int i=0; i<n - 1; i++){
        if(mag[i] == "10" && mag[i+1] == "10" || mag[i] == "01" && mag[i+1] == "01"){
            p++;
        }else{
            q++;
        }
    }
    int grp;
    if(n<=2){
        grp = (p+q)+1;
    }
    grp = ((p + q)/2) + 1;
    cout << grp <<endl;
}

