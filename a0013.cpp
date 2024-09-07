#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0,sum=0,c=0;
    string a;
    cin>>a;
    c=a.length();
    for(int i = 0;i<a.length();i++){
        int result = 1;
        n=a[i]-'0';
        for(int j = 0;j<c;j++){
            result*=n;
        }
        sum+=result;
    }
    if(sum==stoi(a)){//stoi可以將字串變成數字
        cout<<"是\n";
    }
    else{
        cout<<"否\n";
    }

    return 0;
}