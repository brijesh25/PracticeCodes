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

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    int freq[10] = {0};

    for(int i=0;i<n;i++){
        freq[arr[i]] += 1;
    }

    int q;
    cin>>q;
    while(q--){
        int element;
        cin>>element;

        cout<<"Frequency of "<<element <<" is: " <<freq[element]<<endl; 
    }

    

    return 0;
}