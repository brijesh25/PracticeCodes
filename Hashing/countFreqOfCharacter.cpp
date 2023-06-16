#include<bits/stdc++.h>
using namespace std;

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

    string str;
    cin>>str;

    cout<<str<<endl;

    int charFreq[26] = {0};

    for(int i=0;i<str.length();i++){
        charFreq[str[i] - 'a']++;
    }

    int q;
    cin>>q;
    while(q--){
        char element;
        cin>>element;

        cout<<"Frequency of '"<<element <<"' is: " <<charFreq[element-'a']<<endl; 
    }

    

    return 0;
}
