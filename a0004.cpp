#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0,a=0,s=0,sum=0; //n:陣列大小,a:翻轉數字結果,s:翻轉前數字,sum:計算結果數字
    cin>>n;
    int arr[n];

    for(int i =0;i < n; i++){
        cin>>s;
        while(s){
            a*=10; //計算翻轉數字 利用同餘(mod10)
            a+=s%10;
            s/=10;
    }
        arr[i]=a;
        a=0;
    }

    for(int i = 0;i<n;i++){
        sum+=arr[i];
    }

    cout<<sum<<'\n';
    return 0;
}