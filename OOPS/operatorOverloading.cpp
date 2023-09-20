#include<bits/stdc++.h>
using namespace std;

//Operator Overloading ( Compile Time Polymorphism )

class A{
    public:
        int a,b;

        void operator+ (A &obj1){
            int x = this->a;
            int y = obj1.b;
            cout<<x<<" "<<y<<endl;
            cout<< x*y <<endl;
        }

        void show(){
            cout<<this->a<<endl;
        }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    A obj1;
    A obj2;

    obj1.a = 4;
    obj2.b = 5;

    obj1 + obj2;

    obj1.show();

    return 0;
}