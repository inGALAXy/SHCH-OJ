#include<bits/stdc++.h>
using namespace std;

int main(){
    string N;
    long long a = 1;
    cin >> N;
    
    for(char c : N){
        int digit = c - '0';
        if(digit == 0){
            cout << "0\n";   // ��J�� 0 �ɡA������X 0
            return 0;        // �õ����{��
        }
        a *= digit;          // �_�h�A�~�򭼪k�B��
    }
    
    cout << a << '\n';       // �Y�S���J�� 0�A��X�̲ת����n
    return 0;
}
