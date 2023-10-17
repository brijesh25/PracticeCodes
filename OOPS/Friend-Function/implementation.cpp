#include<bits/stdc++.h>
using namespace std;

class comp{
    private:
        int a, b;
    public:
        void setData(int x, int y){
            a=x;
            b=y;
        }

        //Friend Function Declaration
        friend void fun(comp);
};

//Friend Function Definition
void fun(comp x){
    cout<<"Sum is "<<x.a+x.b<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    comp c1;
    c1.setData(5, 10);

    //Calling Friend Function
    fun(c1);

    return 0;
}