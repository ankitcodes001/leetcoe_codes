class Solution {
public:
  
    bool DFS(int node,vector<int>&vis,vector<vector<int>>&graph,bool x ,vector<int>color)
    {
        vis[node] = 1;
        color[node] = x;
        for(auto i : graph[node])
        {
            if(vis[i] == 0 )
            {
               if(DFS(i,vis,graph,x ^ 1 ,color) == false)
                return false;
            }
            else{
                
            
                if(color[i] == x)
                return false;

              }
        }
        
        return true;
        
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();
        vector<int>vis(n,0);
        vector<int>col(n,-1);
        for(int i  = 0;i<n;i++)
        {
            if(vis[i] == 0 && DFS(i,vis,graph,0,col) == false)
            {
                return false;
            }
        }
        
        
        
        return true;
    }
};