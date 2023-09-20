#include<bits/stdc++.h>
using namespace std;

class Cons{
    private:
        int val;
    public:
        Cons(){
            cout<<"Non-parametrised Constructor Called\n";
        }
        Cons(int a){
            cout<<"Parametrised Constructor Called and initiallizing value\n";
            val=a;
        }
        ~Cons(){
            cout<<"Destructor Called\n";
        }
        void printVal(){
            cout<<"\nvalue :"<<val<<endl;
        }
        Cons(Cons &cop){
            cout<<"Copy Constructor Called\n";
            val=cop.val;
        }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Cons c1;
    Cons c2(10);

    c2.printVal();

    Cons c3(c2);
    c3.printVal();

    return 0;
}