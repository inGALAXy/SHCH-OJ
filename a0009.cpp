#include<bits/stdc++.h>
using namespace std;

int main(){
    string N;
    long long a = 1;
    cin >> N;
    
    for(char c : N){
        int digit = c - '0';
        if(digit == 0){
            cout << "0\n";   // 當遇到 0 時，直接輸出 0
            return 0;        // 並結束程式
        }
        a *= digit;          // 否則，繼續乘法運算
    }
    
    cout << a << '\n';       // 若沒有遇到 0，輸出最終的乘積
    return 0;
}
