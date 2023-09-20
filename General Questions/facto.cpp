#include<bits/stdc++.h>
using namespace std;

int facto(int n){
    int fac=1;
    for(int i=n;i>=1;i--){
        fac=fac*i;
    }

    return fac;
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

    cout<<"Factorial of "<< n <<" is : " << facto(n);

    return 0;
}