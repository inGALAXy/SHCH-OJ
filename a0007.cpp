#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, sum = 0;
    cin >> a >> b;
    
    // �T�O a �p�󵥩� b
    if (a > b) {
        swap(a, b);
    }

    // �q a �� b �����C�ӼƦr������M
    for (int i = a; i <= b; i++) {
        sum += i * i;
    }

    cout << sum << '\n';

    return 0;
}
