#include<bits/stdc++.h>
using namespace std;

void fibo(int n){
    int f=0,s=1;

    if(n==0)
        cout<<0;
    if(n==1)
        cout<<0<<" "<<1;
    else{
        cout<<0<<" "<<1;
        for(int i=2;i<n;i++){
            int t=f+s;
            cout<<" " << t;
            f=s;
            s=t;
        }
    }
}

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
    
    int n;
    cin>>n;

    fibo(n);

    return 0;
}