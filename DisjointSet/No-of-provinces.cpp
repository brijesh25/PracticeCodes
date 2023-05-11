//User function Template for C++

class DisjointSet{
  public:
    vector<int> rank,size,parent;
    
    DisjointSet(int v){
        parent.resize(v+1);
        size.resize(v+1);
        
        for(int i=0;i<=v;i++){
            parent[i] = i;
            size[i]=1;
        }
    }
    
    int findParent(int n){
        if(parent[n] == n)
            return n;
        return parent[n] = findParent(parent[n]);
    }
    
    void UnionbySize(int u, int v){
        int paru=findParent(u);
        int parv=findParent(v);
        if(paru == parv)
            return;
        
        if(size[paru] > size[parv]){
            parent[parv]=paru;
            size[paru]++;
        }
        else{
            parent[paru]=parv;
            size[paru]++;
        }
    }
};

class Solution {
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        DisjointSet ds(V);
        
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j] == 1)
                    ds.UnionbySize(i,j);   
            }
        }
        
        int cnt=0;
        for(int i=0;i<V;i++){
            if(ds.parent[i] == i)
                cnt++;
        }
        
        return cnt;
    }
};
