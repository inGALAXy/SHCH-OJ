#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,temp;
    cin>>a>>b;
    
    if(a==1 || b==1){
        cout<<"True\n";
    }
    else{
        if(a==b){
            cout<<"False\n";
        }
        else{
            while(b != 0){
            temp = b;
            b = a % b;
            a = temp;
            }
            if(a!=1){
                cout<<"False";
            }
            else{
                cout<<"True";
            }
        }
    }

    return 0;
}