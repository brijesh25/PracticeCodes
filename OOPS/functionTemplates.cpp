#include<bits/stdc++.h>
using namespace std;

template<class T1, class T2>

void swapp(T1 &a, T2 &b){
    T2 temp=a;
    a=b;
    b=temp;
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

    int a,b;
    cin>>a>>b;

    swapp(a,b);

    cout<<"After Swapping:"<<a<<" "<<b;
    return 0;
}