#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a=10;
    int b=20;

    int *ptr = new int;

    ptr = &a;

    cout<<"Value is "<<a<<" and Address is : "<<ptr<<endl;

    free(ptr);

    ptr = &b;   //Dangling Pointer, after freeing up the space we are again allocating 
                //pointing to some objects

    cout<<"Value is "<<b<<" and Address is : "<<ptr<<endl;


    return 0;
}
