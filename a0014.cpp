#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool test = true;// �Ψӱ��������X

    for(int i =2;i*i<=n;i++){ // i * i <= n �Ӥ��O i < n(i<n�|�ɭPsqrt(n)�H�W���|�Q�p��)
        
        while(n%i==0){ // �ˬd n �O�_�i�H�Q i �㰣
            if(test!=true){// �p�G���O�Ĥ@����X�A�N�[�@�ӭ���
                cout<<'*';
            }
            cout<<i;
            n/=i;
            test = false;// �]�w�� false�A���򪺽�]�ƿ�X�ɻݭn�[����
        }
    }
    if(n>1){// �p�G n �٦��Ѿl�A�h��X n
        if(test!=true){
            cout<<"*";
        }
        cout<<n;
    }

    return 0;
}