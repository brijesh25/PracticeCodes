#include<bits/stdc++.h>
using namespace std;

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
    
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int key;
    cin>>key;

    //Linear Search - TC : O(N)

    for(int i=0;i<n;i++){
        if(key == arr[i]){
            cout<<"Found!";
            return 0;
        }
    }
    cout<<"Not Found !";

    return 0;
}