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

    free(ptr);    //Dangling Pointer, after deallocating the memory space, ptr is still pointing
                  //to that deallocated memomry.
    // Solution of Dangling pointer is just Re-initialise the ptr to NULL or some other objects.
    ptr = &b;   

    cout<<"Value is "<<b<<" and Address is : "<<ptr<<endl;


    return 0;
}
