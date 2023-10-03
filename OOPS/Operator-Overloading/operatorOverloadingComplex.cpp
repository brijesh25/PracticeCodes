#include<bits/stdc++.h>
using namespace std;

//Operator Overloading ( Compile Time Polymorphism )

class Complex{
    private:
        int a,b;
    public:
        Complex(){}

        Complex(int x, int y){
            a = x;
            b = y;
        }

        Complex operator+ (Complex & c){
            Complex temp;
            temp.a = this->a + c.a;
            temp.b = this->b + c.b;
            return temp;
        }

        void showData(){
            cout<<this->a<<" "<<b<<endl;
        }
        
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Complex c1(5,10), c2(100, 200);
    
    Complex c3 = c1+c2;
    c3.showData();
    
    return 0;
}