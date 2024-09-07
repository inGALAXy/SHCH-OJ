#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    long long result = 1;
    for (int i = 0; i < k; i++) {
        result *= n;
        result %= 100000;  // 只保留末五位數
    }

    cout << result << '\n';
    return 0;
}
