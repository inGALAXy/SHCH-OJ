#include<bits/stdc++.h>
using namespace std;

int main(){
    int s;
    cin>>s;

    if(s>100){
        cout<<"���~\n";
    }
    else if(s>=90&&s<=100){
        cout<<"�u\n";
    }
    else if(s>=80&&s<90){
        cout<<"��\n";
    }
    else if(s>=70&&s<80){
        cout<<"�A\n";
    }
    else if(s>=60&&s<70){
        cout<<"��\n";
    }
    else if(s>=0&&s<=60){
        cout<<"�B\n";
    }
    else if(s<0){
        cout<<"���~\n";
    }
    


    return 0;
}