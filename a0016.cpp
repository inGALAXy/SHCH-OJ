#include<bits/stdc++.h>
using namespace std;


int countDigits(int n) {
    if (n == 0)
    {
        return 1;
    }

    int count = 0;

    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

int main()
{
    int n;
    bool odd = true;
    cin>>n;
    int m = countDigits(n);
    for(int i=0;i<m;i++)
    {
        if(n%2==0){
            odd = false;
            break;
        }
        n/=10;
    }
    if(odd){
        cout<<"¬O\n";
    }
    if(!odd)
    {
        cout<<"§_\n";
    }

}
