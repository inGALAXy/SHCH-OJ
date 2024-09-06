#include<bits/stdc++.h>
using namespace std;

int main(){
    float kg,cm,m,bmi;
    cin>>kg>>cm;
    m=cm/100;
    bmi=kg/(m*m);
    cout<<fixed<<setprecision(1)<<bmi<<'\n';
    return 0;
}