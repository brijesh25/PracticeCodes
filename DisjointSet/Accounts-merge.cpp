class DisjointSet{
  public:
    vector<int> rank,parent,size;
    
    DisjointSet(int n){
        parent.resize(n+1);
        size.resize(n+1);
        rank.resize(n+1, 0);
        for(int i=0;i<=n;i++){
            parent[i] = i;
            size[i] = 1;
        }
    }
    
    int findparent(int n){
        if(parent[n] == n)
            return n;
        return parent[n] = findparent(parent[n]);
    }
    
    void unionbysize(int u, int v){
        int paru=findparent(u);
        int parv=findparent(v);
        if(paru == parv)
            return;
        
        if(size[paru] > size[parv]){
            parent[parv] = paru;
            size[paru]+=size[parv];
        }
        else{
            parent[paru]=parv;
            size[parv]+=size[paru];
        }
    }
};

class Solution{
  public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts) {
        int n =accounts.size();
        DisjointSet ds(n);
        unordered_map<string, int> mapmail;
        
        for(int i=0;i<n;i++){
            for(int j=1;j<accounts[i].size();j++){
                string mail = accounts[i][j];
                if(mapmail.find(mail) == mapmail.end()){
                    mapmail[mail]=i;
                }
                else{
                    ds.unionbysize(i,mapmail[mail]);
                }
            }
        }
        
        vector<string> mergedmail[n];
        
        for(auto it : mapmail){
            string mail=it.first;
            int node = ds.findparent(it.second);
            mergedmail[node].push_back(mail);
        }
        
        vector<vector<string>> ans;
        
        for(int i=0;i<n;i++){
            if(mergedmail[i].size() == 0)
                continue;
            sort(mergedmail[i].begin(), mergedmail[i].end());
            vector<string> temp;
            temp.push_back(accounts[i][0]);
            for(auto it : mergedmail[i]){
                temp.push_back(it);
            }
            ans.push_back(temp);
        }
        
        return ans;
    }
};
