#include<bits/stdc++.h>
using namespace std;

int bin[32]={0};
void printbin(int n){
    int i=0;
    
    while(n!=0){
        bin[i]=n%2;
        n=n>>1;
        i++;
    }

    for(int j=31;j>=0;j--)
        cout<<bin[j];
}

int printingbin(int n){
    int ans=0,i=0;

    while(n!=0){
        int bit=n&1;
        ans = (bit * pow(10,i))+ ans;
        n=n>>1;
        i++;
    }
    return ans;
}

int printing_neg_bin(int n){
    int ans = printingbin(-(n));
    
    ans = ~ans;
    ans = ans + 1;

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
    
    int n,nn;
    cin>>n;
    nn=n;

    printbin(n);

    cout<<endl;
    // Another Approach - Page 73
    int ans = printingbin(nn);
    cout<<ans<<endl;

    // For Negative decimal Number i.e. -6
    // ignore -ve sign
    // find 2's compliment -> binary presentation

    int negnum;
    cin>>negnum;
    int ans1 = printing_neg_bin(negnum);
    cout<<ans1<<endl;

    return 0;
}