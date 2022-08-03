
class Solution {
public:
    typedef long long ll;
    void DFS(int node,vector<int>adj[],vector<bool>&vis,ll &sz)
    {
        
        vis[node] = true;
        
        sz++;
        
        for(auto x:adj[node])
        {
            if(vis[x] == false)
                DFS(x,adj,vis,sz);
        }
        
    }
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        
        vector<bool>vis(n,false);
        vector<int>adj[n];
        for(auto v : edges)
        {
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        
        }
    
        ll res = ((ll)n*(n-1))/2;
        for(int i  = 0;i<n;i++)
        {
            if(vis[i] == false)
            {
                ll sz = 0;
                DFS(i,adj,vis,sz);
               res -= (sz*(sz-1))/2;
                
            }}
        
  return res;
        
    }
};