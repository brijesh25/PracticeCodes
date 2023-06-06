/* Pattern 9 - Diamond : OUTPUT
                *
               * *
              * * *
             * * * *
            * * * * *
            * * * * *
             * * * *
              * * *
               * *
                *
*/

#include<bits/stdc++.h>
using namespace std;

void printDiamond(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            int tmp=0;
            for(int j=0;j<2*i+1;j++){
                if(j%2 != 0){
                    cout<<" ";
                    j++;
                }
                cout<<"*";
                
            }
            // for(int j=0;j<n-i-1;j++){
            //     cout<<" ";
            // }
            cout<<endl;
        }
        
        
        for(int i=n;i>0;i--){
            for(int j=0;j<n-i;j++){
                cout<<" ";
            }
            
            for(int j=0;j<2*i-1;j++){
                if(j%2 != 0){
                    cout<<" ";
                    j++;
                }
                cout<<"*";
            }
            
            // for(int j=0;j<n-i;j++){
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
        printDiamond(n);
    }

    return 0;
}
