#include<bits/stdc++.h>
using namespace std;

int getLength(char name[]){
    int cnt=0;
    for(int i=0; name[i] != '\0'; i++){
        cnt++;
    }
    return cnt;
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
    
    char name[100];

    cin>>name;
    
    cout<<"Length of String is : " << getLength(name);

    return 0;
}
