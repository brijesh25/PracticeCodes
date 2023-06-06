/* Pattern 8 : OUTPUT
    *********
    _*******_
    __*****__
    ___***___
    ____*____
*/

#include<bits/stdc++.h>
using namespace std;

void printp8(int n) {
    for(int i=n;i>0;i--){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){

    #ifndef ONLINE_JUDGE
		//for getting input
		freopen("C:\\Users\\brije\\Desktop\\Codes\\Github\\input.txt","r",stdin);
		//for getting output
		freopen("C:\\Users\\brije\\Desktop\\Codes\\Github\\output.txt","w",stdout);
	#endif

    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        printp8(n);
    }

    return 0;
}
