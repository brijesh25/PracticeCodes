#include<bits/stdc++.h>
using namespace std;

class School{
    private:
        int a,b,c;
    public:
        School(){
            cout<<"Constructor is called.\n";
        }
        void getData(){
            cin>>a>>b;
        }
        int sum(){
            return a+b;
        }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
		//for getting input
		freopen("input.txt","r",stdin);
		//for getting output
		freopen("output.txt","w",stdout);
	#endif

    School s;

    s.getData();

    cout<<"Sum: "<<s.sum();

    return 0;
}
