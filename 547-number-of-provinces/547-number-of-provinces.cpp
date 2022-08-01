class Solution {
public:
     vector<int>adj[201];
    
    void dfs(int node,vector<bool>&vis,vector<vector<int>>&nums)
    {
         
        vis[node] = true;
        
        for(int i  = 0;i<nums[node].size();i++)
            if(nums[node][i] == 1 && !vis[i])
            dfs(i,vis,nums);
    
    }
    int findCircleNum(vector<vector<int>>& edge) {
        int n = edge.size();
       
        int ans = 0;
        vector<bool>vis(n,false);
        for(int i = 0;i<n;i++)
        {
            if(!vis[i])
             ans++;
            dfs(i,vis,edge);
            
        }
        
        return ans;
        
    }
};