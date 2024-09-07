#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    long long sum;
    cin>>n>>m;
    sum=pow(n,m);
    sum/=100000;
    cout<<sum<<'\n';
    return 0;
}