#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool prime = true;

    cin>>n;

    for(int i = 2;i<n;i++){
        if(n%i==0){
            prime = false;
        }
    }

    if(prime){
        cout<<"質數\n";
    }
    else{
        cout<<"合數\n";
    }
    

    return 0;
}