/* Pattern 7 : OUTPUT
    ____*____
    ___***___
    __*****__
    _*******_
    *********
*/

#include<bits/stdc++.h>
using namespace std;

void printp7(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            for(int j=0;j<2*i+1;j++){
                cout<<"*";
            }
            // for(int j=0;j<n-i-1;j++){
            //     cout<<" ";
            // }
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
        printp7(n);
    }

    return 0;
}
