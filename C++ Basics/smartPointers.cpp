#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    shared_ptr<int> unptr1 = make_shared<int> (25);
    cout<< unptr1 <<endl;
    cout<< *unptr1 <<endl;
    cout<< unptr1.use_count() <<endl;
    shared_ptr<int> shptr;
    shptr = unptr1;

    cout<<unptr1.use_count()<<endl;
    cout<<shptr.use_count()<<endl;

    system("pause>nul");
    return 0;
}