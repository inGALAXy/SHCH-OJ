#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool test = true;// 用來控制乘號的輸出

    for(int i =2;i*i<=n;i++){ // i * i <= n 而不是 i < n(i<n會導致sqrt(n)以上不會被計算)
        
        while(n%i==0){ // 檢查 n 是否可以被 i 整除
            if(test!=true){// 如果不是第一次輸出，就加一個乘號
                cout<<'*';
            }
            cout<<i;
            n/=i;
            test = false;// 設定為 false，後續的質因數輸出時需要加乘號
        }
    }
    if(n>1){// 如果 n 還有剩餘，則輸出 n
        if(test!=true){
            cout<<"*";
        }
        cout<<n;
    }

    return 0;
}