#include<bits/stdc++.h>
using namespace std;

void printArray(vector<vector<int>> arr, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
		//for getting input
		freopen(".txt","r",stdin);
		//for getting output
		freopen("output.txt","w",stdout);
	#endif

    int n;
    cin>>n;

    vector<vector<int>> arr(n,vector<int> (n, 0));

    for(int i=0;i<n;i++){
        vector<int> vec;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            vec.push_back(x);
        }
        arr.push_back(vec);
    }

    //Transpose

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    printArray(arr, n);


    return 0;
}
