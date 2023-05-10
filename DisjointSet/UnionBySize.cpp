#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
    vector<int> parent, rank, size;
    public:
        DisjointSet(int n){
            rank.resize(n+1, 0);
            parent.resize(n+1);
            size.resize(n+1);
            for(int i=0;i<=n;i++){
                parent[i]=i;
                size[i]=1;
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
            if(paru == parv)    return;

            if(rank[paru] > rank[parv])
                parent[parv] = paru;
            else if(rank[paru] < rank[parv])
                parent[paru] = parv;
            else{
                parent[paru] =parv;
                rank[paru]++;
            }
        }

        void UnionbySize(int u, int v){
            int paru = findParent(u);
            int parv = findParent(v);
            if(paru == parv)    return;

            if(size[paru] > size[parv]){
                parent[parv] = paru;
                size[parv] += size[paru];
            }
            else{
                parent[paru] = parv;
                size[paru] += size[parv];
            }
        }
};

int main(){
    DisjointSet ds(7);

    ds.UnionbySize(1,3);
    ds.UnionbySize(2,4);
    ds.UnionbySize(5,6);
    ds.UnionbySize(6,7);

    if(ds.findParent(3) == ds.findParent(7))
        cout<<"Same\n";
    else
        cout<<"Not Same\n";

    ds.UnionbySize(2,3);
    ds.UnionbySize(3,7);

    if(ds.findParent(3) == ds.findParent(7))
        cout<<"Same\n";
    else
        cout<<"Not Same\n";

    return 0;
}
