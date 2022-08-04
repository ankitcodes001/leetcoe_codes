class Solution {
public:
    void DFS(int i ,vector<int>adj[],vector<int>&vis,vector<int>&ans)
    {
        vis[i] = 1;
        vector<int>visited_color(5,0);
        for(auto x : adj[i])
        {   if(vis[x] == 0)
            DFS(x,adj,vis,ans);
            visited_color[ans[x]] = 1;
        }
        
        for(int j  = 1;j<=4;j++)
        {
            if(visited_color[j] == 0)
            {
                ans[i] = j;
                break;
            }
        }
        
    }
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) 
    {
        vector<int>adj[n+1];
        vector<int>vis(n+1,0);
        vector<int>ans(n,0);
        
        for(auto v : paths)
        {
            adj[v[0]-1].push_back(v[1]-1);
            adj[v[1]-1].push_back(v[0]-1);
        }
        
        
        for(int i=0;i<n;i++)
        {
            if(vis[i] ==  0)
            {
                DFS(i,adj,vis,ans);
            }
        }
        
        return ans;
        
    }
};