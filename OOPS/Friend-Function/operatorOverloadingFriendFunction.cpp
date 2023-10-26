#include<bits/stdc++.h>
using namespace std;

class A{
    private:
        int a,b;
    public:
        void setData(int x, int y){
            a = x;
            b = y;
        }

        // Normal Operator Overloading
        // A operator +(A o1){
        //     A temp;
        //     temp.a = a + o1.a;
        //     temp.b = b + o1.b;
        //     return temp;
        // }

        void showData(){
            cout<<"Value of a and b is "<<a<<" "<<b<<endl;
        }
        
        friend A operator +(A,A);
};

//Operator Overloading through Friend Function

A operator +(A o1, A o2){
    A temp;
    temp.a = o1.a + o2.a;
    temp.b = o1.b + o2.b;
    return temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    A o1,o2,o3;
    o1.setData(2, 4);
    o2.setData(6, 10);

    //o3 = o1+o2;     //same as o3 = o1.operator+(o2); -> o1 is caller object -> Normal Operator Overloading

    o3 = o1 + o2;

    o3.showData();

    return 0;
}