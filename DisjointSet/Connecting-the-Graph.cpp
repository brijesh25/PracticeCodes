// User function Template for C++

class DisjointSet{
    public:
        vector<int> parent, size,rank;
        
        DisjointSet(int n){
            rank.resize(n+1,0);
            parent.resize(n+1);
            for(int i=0;i<n;i++){
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
            if(paru == parv)    return;
            
            if(rank[paru] > rank[parv]){
                parent[parv] = paru;
            }
            else if(rank[paru] < rank[parv]){
                parent[paru] = parv;
            }
            else{
                parent[parv] = paru;
                rank[paru]++;
            }
        } 
};

class Solution {
  public:
    int Solve(int n, vector<vector<int>>& edge) {
        DisjointSet ds(n);
        
        int nc=0,extraedg=0;
        
        for(auto it : edge){
            int u=it[0];
            int v=it[1];
            
            if(ds.findParent(u) == ds.findParent(v))
                extraedg++;
            else{
                ds.UnionbyRank(u,v);
            }
        }
        
        for(int i=0;i<n;i++){
            if(ds.parent[i] == i)
                nc++;
        }
        
        if(extraedg >= nc-1)
            return nc-1;
        else
            return -1;
    }
};
