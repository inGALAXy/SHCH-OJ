#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, sum = 0;
    cin >> a >> b;
    
    // 確保 a 小於等於 b
    if (a > b) {
        swap(a, b);
    }

    // 從 a 到 b 之間每個數字的平方和
    for (int i = a; i <= b; i++) {
        sum += i * i;
    }

    cout << sum << '\n';

    return 0;
}
