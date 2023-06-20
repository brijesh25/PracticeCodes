#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int n, int key){
    int start=0,end=n-1;

    while(start <= end){
        //int mid=(start+end)/2;  //This will may be exceed the range of INT
                                  //when added. So we use,

        int mid = start + (end - start)/2;

        //key matches at mid
        if(key == arr[mid])
            return true;
        else if(key > arr[mid] )    //Go to right part
            start=mid+1;
        else                        //Go to left part
            end=mid-1;
    }
    return false;
}

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

    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int key;
    cin>>key;

    //Binary Search - TC : O(log(N))

    if(binarySearch(arr, n, key))
        cout<<"Found!";
    else
        cout<<"Not Found!";

    return 0;
}
