#include<bits/stdc++.h>
using namespace std;

int arr[100] = {0}; //Array of size 100 and all values initialize to 0

void inputArray(int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void printArray(int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int printSecondLargest(int n){
    int maxi = INT_MIN;
    int ind=-1;

    for(int i=0;i<n;i++){
        maxi=max(maxi, arr[i]);
        ind = i;
    }
    //cout<<maxi<<endl;

    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] < maxi){
            ans = max(ans, arr[i]);
        }
    }
    if(ans == INT_MIN){
        return -1;
    }
    return ans;
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

    inputArray(n);      // Taking input of array till n

    printArray(n);      // Output of an Array till n

    // Largest Element:
    cout<<"Second Largest Element is : \n"<<printSecondLargest(n);

    return 0;
}