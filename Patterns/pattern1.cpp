/* Pattern 1 : OUTPUT
  * * * * *
  * * * * *
  * * * * *
  * * * * *
  * * * * *
*/

#include<bits/stdc++.h>
using namespace std;

void printp1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        printp1(n);
    }

    return 0;
}
