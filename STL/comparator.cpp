#include<bits/stdc++.h>
using namespace std;

bool swap_or_not(int a, int b){
    if(a > b)
        return true;
    return false;
}

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first){
        return a.second > b.second;
    }
    return a.first > b.first;
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

    // int arr[n];

    // for(int i=0;i<n;i++)
    //     cin>>arr[i];

    // //Swap function by comparing individaul elements
    // //O(n^2) TC
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(swap_or_not(arr[i], arr[j]))
    //             swap(arr[i], arr[j]);
    //     }
    // }

    // //STL sorting function - Ascending order
    // //TC : O(N*log N);
    // sort(arr,arr+n);
    // cout<<"Sorted in Ascending Order-\n";
    // for(int i=0;i<n;i++)
    //     cout<<arr[i]<<" ";
    // cout<<endl;

    // //STL sorting function - Descending order
    // //TC : O(N*log N);
    // sort(arr,arr+n, greater<int>());
    // cout<<"Sorted in Descending Order-\n";
    // for(int i=0;i<n;i++)
    //     cout<<arr[i]<<" ";

    /*
        Now taking input as pair of vectors and then makking a 
        user-defined Comparator Functions.
    */
    vector<pair<int, int>> vc(n);
    for(int i=0;i<n;i++){
        cin>>vc[i].first>>vc[i].second;
    }

    cout<<"Vector of Pairs\n";
    for(int i=0;i<n;i++)
        cout<<vc[i].first<<" "<<vc[i].second<<endl;
    
    //Now Sorting the vector of pairs wrt to the keys

    sort(vc.begin(), vc.end());
    cout<<"Ascending Order\n";
    for(int i=0;i<n;i++)
        cout<<vc[i].first<<" "<<vc[i].second<<endl;

    /*
        Comparator Function:
            We can make the comparator function for our own type of 
            comparison.
        
        *** Comparator function return false when the arguments or
            conditions are equal ***
    */

    //Sorted in ascending order wrt key
    //When the keys are same then sort 
    //the values by descending order
    sort(vc.begin(), vc.end(), cmp);
    cout<<"User-Defined Comparison\n";
    for(int i=0;i<n;i++)
        cout<<vc[i].first<<" "<<vc[i].second<<endl;

    sort(vc.begin(), vc.end(), greater<pair<int, int>>());
    cout<<"Descending Order\n";
    for(int i=0;i<n;i++)
        cout<<vc[i].first<<" "<<vc[i].second<<endl;

    

    return 0;
}
