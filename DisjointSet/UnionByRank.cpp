#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
    vector<int> parent, rank;
    public:
        DisjointSet(int n){
            rank.resize(n+1, 0);
            parent.resize(n+1);
            for(int i=0;i<=n;i++){
                parent[i]=i;
            }
        }

        int findParent(int n){
            if(parent[n] == n)
                return n;
            return parent[n] = findParent(parent[n]);
        }

        void UnionbyRank(int u, int v){
            int paru = findParent(u);
            int parv = findParent(v);

            if(rank[paru] > rank[parv])
                parent[parv] = paru;
            else if(rank[paru] < rank[parv])
                parent[paru] = parv;
            else{
                parent[paru] =parv;
                rank[paru]++;
            }
        }
};

int main(){
    DisjointSet ds(7);

    ds.UnionbyRank(1,3);
    ds.UnionbyRank(2,4);
    ds.UnionbyRank(5,6);
    ds.UnionbyRank(6,7);

    if(ds.findParent(3) == ds.findParent(7))
        cout<<"Same\n";
    else
        cout<<"Not Same\n";

    ds.UnionbyRank(2,3);
    ds.UnionbyRank(3,7);

    if(ds.findParent(3) == ds.findParent(7))
        cout<<"Same\n";
    else
        cout<<"Not Same\n";

    return 0;
}
