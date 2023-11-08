#include<bits/stdc++.h>
using namespace std;

class Dummy{
    private:
        int a, b;
    public:
        void setData(int x, int y){
            a=x;
            b=y;
        }

        void showData(){
            cout<<a<<" "<<b<<endl;
        }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Dummy d1;
    d1.setData(5, 10);

    Dummy d2 = d1;  //Copy Constructor -> Shallow Copy: All data members copy as it is to other object.

    d2.showData();

    return 0;
}