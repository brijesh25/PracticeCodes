#include<bits/stdc++.h>
using namespace std;

class Dummy{
    private:
        int a, b;
        int *p;
    public:
        Dummy(){
            p = new int;
        }

        void setData(int x, int y, int z){
            a=x;
            b=y;
            *p=z;
        }

        void showData(){
            cout<<a<<" "<<b<<" "<<*p<<endl;
        }

        Dummy(Dummy &d){    // Copy Constructor to make another memory allocation
            a = d.a;        // Deep Copy
            b = d.b;
            p = new int;
            *p = *(d.p);
        }

        ~Dummy(){
            delete p;
        }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Dummy d1;
    d1.setData(5, 10, 15);

    Dummy d2 = d1;

    d1.showData();


    return 0;
}