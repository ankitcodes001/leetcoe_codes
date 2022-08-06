class Solution {
public:
   void DFS(int node ,vector<int>adj[],vector<int>&vis,vector<int>&ans)
   {
       vis[node] = 1;
       vector<int>visited_color(5,0);
       for(auto i : adj[node])
       {
           if(vis[i] == 0)
           {
            DFS(i,adj,vis,ans);  
           }
           visited_color[ans[i]] = 1;
       }
       for(int i = 1;i<=5;i++)
       {
           if(visited_color[i] == 0)
           {
               ans[node] = i;
                 
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