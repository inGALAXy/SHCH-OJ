#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;
    int arr[6];
    for(int i = 1;i<7;i++){
        arr[i-1]=abs(a[i]-a[i-1]);
    }
    for(int i = 0;i<6;i++){
        cout<<arr[i];
    }

    return 0;
}