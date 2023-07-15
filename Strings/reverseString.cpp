// FOUR different ways to reverse the string

#include<bits/stdc++.h>
using namespace std;

int getLength(char name[]){
    int cnt=0;
    for(int i=0; name[i] != '\0'; i++){
        cnt++;
    }
    return cnt;
}

void reverseString1(char name[], int len){
    int s=0;
    int e=len-2;

    while(s<e){
        swap(name[s++], name[e--]);
    }
}

void reverseString2(char name[], int len){
    int s=0;
    int e=len-2;

    while(s<e){
        name[s] ^= name[e];
        name[e] ^= name[s];
        name[s] ^= name[e];

        s++;
        e--;
    }
}

void reverseString3(char name[], int len){
    reverse(name, name+len-1);
}

void reverseStringForLoop(char name[], int len){
    for(int i=0,j=len-1;i<len/2;i++,j--){
            char temp;
            temp=name[j];
            name[j]=name[i];
            name[i]=temp;
        }
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
    int len=getLength(name);

    cout<<"Length of String is : " << len << endl;

    reverseStringForLoop(name, len);
    cout<<"Reverse os String is : \n" << name;

    return 0;
}
