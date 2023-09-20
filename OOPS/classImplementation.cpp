#include<bits/stdc++.h>
using namespace std;

class Dog{
    private:
        string breed;
        string color;
    
    public:
        void setBreed(string inp){
            breed = inp;
        }

        void setColor(string col);

        void getBreed(){
            cout<<breed<<endl;
        }

        void getColor();

    protected:
};

void Dog::getColor(){
    cout<<color<<endl;
}

void Dog::setColor(string col){
    color = col;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Dog dg;

    dg.setBreed("German Sepherd");
    dg.setColor("Black");

    dg.getBreed();
    dg.getColor();

    return 0;
}