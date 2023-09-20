#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j] < arr[mini])
                mini=j;
        }
        swap(arr[mini], arr[i]);
    }
}

void bubbleSort(int arr[], int n){
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}

void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j] > temp){
                arr[j+1]=arr[j];
            }
            else
                break;
            j--;
        }
        arr[j+1]=temp;
    }
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

    insertionSort(arr, n);

    for(int i=0;i<n;i++)
        cout<<arr[i] <<" ";

    return 0;
}