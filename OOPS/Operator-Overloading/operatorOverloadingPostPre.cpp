#include<bits/stdc++.h>
using namespace std;

//Operator Overloading ( Compile Time Polymorphism )

class Complex{
    private:
        int a;
    public:
        // Complex(){
        //     cout<<"Constructor is Called!!!\n";
        // }

        void setData(int x){
            a = x;
        }


        void showData(){
            cout<<this->a<<endl;
        }
        
        Complex operator++(){   //Pre-Increment
            Complex temp;
            temp.a=++a;     //Increment then assign
            return temp;
        }

        Complex operator ++(int){   //Post-Increment
            Complex temp;
            temp.a = a++;   //Assign then increment
            return temp;
        }

        // ~Complex(){
        //     cout<<"Destructor is Called!!!\n";
        // }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Complex c1,c2;
    c1.setData(5);
    c1.showData();

    //c2 = ++c1;  //PreIncrement
    c2 = c1++;  //PostIncrement

    c1.showData();
    c2.showData();
    
    return 0;
}