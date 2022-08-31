class Solution {
public:
    int ans = -1;
    bool cycle;
    vector<int>depth;
    void dfs(int node,int d,vector<vector<int>>&adj,vector<int>&vis)
    {
        vis[node] = 1;
        depth[node] = d;
        
        for(auto x : adj[node])
        {
            if(vis[x] == 0)
            {
                dfs(x,d+1,adj,vis);
            }
            else if(vis[x]== 1)
            {
             cycle = true;
             ans = max(ans,depth[node]-depth[x]+1);
            }
        }
      vis[node] = 2;
        
        
        
    }
    int longestCycle(vector<int>& edge) {
        int n = edge.size();
        cycle = false;
        
        depth = vector<int>(n+1,0);
        vector<vector<int>>v(n+1);
        for(int i = 0;i<edge.size();i++)
        {   
            if(edge[i]!=-1)
            v[i].push_back(edge[i]);
        }
        vector<int>vis(n+1,false);
        
        
        
        for(int i =0;i<n;i++)
        {
            if(vis[i]== 0)
            {
                dfs(i,0,v,vis);
            }
        }
        
        if(cycle)
        return ans;
        
        return -1;
    }
};