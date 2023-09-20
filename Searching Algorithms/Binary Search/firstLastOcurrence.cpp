#include<bits/stdc++.h>
using namespace std;

int firstOccurence(int nums[], int n, int target){
        int start=0,end=n-1,mid;
        int index = -1;

        while(start <= end){
            mid = start + (end - start)/2;

            if(nums[mid] == target){
                index=mid;
                end=mid-1;
            }
            else if(target > nums[mid]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return index;
}

int lastOccurence(int nums[], int n, int target){
    int start=0,end=n-1,mid;
    int index = -1;

    while(start <= end){
        mid = start + (end - start)/2;

        if(nums[mid] == target){
            index=mid;
            start=mid+1;
        }
        else if(target > nums[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return index;
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
    
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int key;
    cin>>key;

    //Binary Search - TC : O(log(N))
    //First and last occurence of Key in Array.

    cout<<"First Occrence : "<<firstOccurence(arr, n, key)<<endl;
    cout<<"Last Occrence : "<<lastOccurence(arr, n, key)<<endl;
    
    // From STL - Upper Bound & Lower Bound

    auto low=lower_bound(arr, arr+n, key);
    auto up = upper_bound(arr, arr+n, key);

    cout<<"First Occrence : "<<low-arr<<endl;
    cout<<"Last Occrence : "<<up-arr-1<<endl;

    //Total Number of occurences

    cout<<"Total No. of Occurences : "<< (up-arr-1) - (low -arr)+ 1 <<endl;

    return 0;
}