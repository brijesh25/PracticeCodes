#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
        Complex(){  //Default Constructor
            a = 0;
            b = 0;
        }

        Complex(int x){     //Parameterized Constructor
            a = x;
        }

        Complex(int x, int y){      //Parameterized Constructor
            a = x;
            b = y;
        }
        void printValue();
};

void Complex::printValue(){
    cout<<a<<" "<<b<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Complex c1;
    c1.printValue();
    Complex c2(3);
    c2.printValue();
    Complex c3(5, 10);
    c3.printValue();
    
    return 0;
}