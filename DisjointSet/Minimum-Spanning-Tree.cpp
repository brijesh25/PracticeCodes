class DisjointSet{
    vector<int> parent,rank;
    public:
        DisjointSet(int n){
            parent.resize(n);
            rank.resize(n,0);
            for(int i=0;i<n;i++){
                parent[i]=i;
            }
        }
        
        int findParent(int n){
            if(parent[n] == n)
                return n;
            return parent[n] = findParent(parent[n]);
        }
        
        void Unionbyrank(int u, int v){
            int paru = findParent(u);
            int parv = findParent(v);
            
            if(paru == parv)    return;
            
            if(rank[paru] > rank[parv]){
                parent[parv] = paru;
            }
            else if (rank[paru] < rank[parv]){
                parent[paru]=parv;
            }
            else{
                parent[paru]=parv;
                rank[parv]++;
            }
        }
};

class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<pair<int, pair<int ,int>>> edges;
        
        for(int i=0;i<V;i++){
            for(auto it : adj[i]){
                int adjnode=it[0];
                int wt=it[1];
                int node=i;
                
                edges.push_back({wt,{node, adjnode}});
                
            }
        }
        
        sort(edges.begin(), edges.end());
        
        DisjointSet ds(V);
        
        int mstwt=0;
        
        for(auto it : edges){
            int wt=it.first;
            int u=it.second.first;
            int v=it.second.second;
            
            if(ds.findParent(u) != ds.findParent(v)){
                mstwt += wt;
                ds.Unionbyrank(u,v);
            }
        }
        
        return mstwt;
    }
};
