#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0,a=0,s=0,sum=0; //n:�}�C�j�p,a:½��Ʀr���G,s:½��e�Ʀr,sum:�p�⵲�G�Ʀr
    cin>>n;
    int arr[n];

    for(int i =0;i < n; i++){
        cin>>s;
        while(s){
            a*=10; //�p��½��Ʀr �Q�ΦP�l(mod10)
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