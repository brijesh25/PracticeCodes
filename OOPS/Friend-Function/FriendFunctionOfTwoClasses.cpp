#include<bits/stdc++.h>
using namespace std;

class B;    //Defining prototype here so that compiler knows B is a class that define after the class A
class A{
    private:
        int a;
    public:
        void setData(int x){
            a = x;
        }

        friend void fun(A, B);
};

class B{
    private:
        int b;
    public:
        void setData(int x){
            b = x;
        }

        friend void fun(A, B);
};

//Friend Function is shared between 2 classes.
void fun(A ob1, B ob2){
    cout<<ob1.a+ob2.b<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    A o1;
    B o2;

    o1.setData(2);
    o2.setData(3);

    fun(o1, o2);

    return 0;
}