#include<bits/stdc++.h>
using namespace std;

int partit(int arr[], int s, int e){
    int pivot = arr[s];
    int cnt=0;

    for(int i=s+1;i<=e;i++){
        if(arr[i] <= pivot)
            cnt++;
    }

    //swap the pivot to right place
    int pivIndex=s+cnt;
    swap(arr[s], arr[pivIndex]);

    //now all the elements before pivot will be smaller than pivot
    //Similarly, elements after pivot will be greater that pivot

    int i=s, j=e;

    while(i < pivIndex && j > pivIndex){
        while(arr[i] <= pivot)
            i++;
        
        while(arr[j] > pivot)
            j--;
        
        if(i<pivIndex && j > pivIndex)
            swap(arr[i++], arr[j--]);
    }
    return pivIndex;
}

void quickSort(int arr[], int s, int e){
    //Base Case
    if(s >= e)
        return;

    //Partition
    int part = partit(arr, s, e);

    //left sort
    quickSort(arr, s, part-1);

    //right sort
    quickSort(arr, part+1, e);
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

    quickSort(arr, 0, n-1);

    for(int i=0;i<n;i++)
        cout<<arr[i] <<" ";

    return 0;
}
