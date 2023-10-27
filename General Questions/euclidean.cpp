#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a = 20, b= 15;

    while(a > 0 && b > 0){
        if(a>b)
            a=a%b;
        else
            b=b%a;
    }
    if(a==0)
            cout<<"GCD : "<<b;
    else
            cout<<"GCD : "<<a;

    return 0;
}