#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0,sum=0,sum1=0;
    float num = 0;
    cin>>a;

    for(int i = 1;i<=a;i++)
    {
        num = sqrt(i);
        if(floor(num)==num){
            sum+=1;
            sum1+=i;
        }
    }
    cout<<sum<<" " <<sum1;
}
