#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
        // Your code here
        vector<int> temp;
        int left=l,right=m+1;
        
        while(left <= m && right <= r){
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        
        while(left <= m){
            temp.push_back(arr[left]);
            left++;
        }
        
        while(right <= r){
            temp.push_back(arr[right]);
            right++;
        }
        
        for(int i=l; i <= r;i++){
            arr[i] = temp[i-l];
        }
        
}

void mergeSort(int arr[], int l, int r)
{
    //code here
    if(l>=r)
        return;
    
    int m=(l+r)/2;
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    
    merge(arr, l, m, r);
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

    mergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++)
        cout<<arr[i] <<" ";

    return 0;
}
