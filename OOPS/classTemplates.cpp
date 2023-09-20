#include<bits/stdc++.h>
using namespace std;

template<class T1, class T2>

class School{
    private:
        T1 a;
        T2 b;
    public:
        School(){
            cout<<"Constructor is called.\n";
        }
        void getData(){
            cin>>a>>b;
        }
        void print(){
            cout<<a<<" "<<b;
        }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
		//for getting input
		freopen("C:\\Users\\brije\\Desktop\\Codes\\Github\\input.txt","r",stdin);
		//for getting output
		freopen("C:\\Users\\brije\\Desktop\\Codes\\Github\\output.txt","w",stdout);
	#endif

    School<int, char> s;

    s.getData();

    s.print();

    return 0;
}