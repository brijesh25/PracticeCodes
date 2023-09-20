#include<bits/stdc++.h>
using namespace std;

template<class T>

class School{
    private:
        T a,b,c;
    public:
        School(){
            cout<<"Constructor is called.\n";
        }
        void getData(){
            cin>>a>>b;
        }
        T sum(){
            return a+b;
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

    School<int> s;

    s.getData();

    cout<<"Sum: "<<s.sum();

    return 0;
}