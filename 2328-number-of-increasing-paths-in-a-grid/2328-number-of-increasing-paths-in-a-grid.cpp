class Solution {
public:
    int dp[1001][1001];
    int n,m;
    int mod = 1e9+7;
    int solve(vector<vector<int>>&grid,int i,int j,int ans)
    {  
        
        if(dp[i][j]!= -1)
        return dp[i][j];
        
     ans=1;
     if((i+1)<n)
     {
         if(grid[i+1][j] > grid[i][j])
         {
             ans = (ans+solve(grid,i+1,j,ans))%mod;
         }
     }
     if((i-1)>=0)
     {
         if(grid[i-1][j] > grid[i][j])
         {
             ans = (ans+solve(grid,i-1,j,ans))%mod;
         }
     }
     if((j+1)<m)
     {
         if(grid[i][j+1] > grid[i][j])
         {
             ans = (ans+solve(grid,i,j+1,ans))%mod;
         }
     }
     if((j-1)>=0)
     {
         if(grid[i][j-1] > grid[i][j])
         {
             ans = (ans+solve(grid,i,j-1,ans))%mod;
         }
     }
        dp[i][j] = ans;
       
     return ans;
     
    }
    int countPaths(vector<vector<int>>& grid) {
    memset(dp,-1,sizeof(dp));
     n  = grid.size();
     m = grid[0].size();
    int ans = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            ans =(ans+solve(grid,i,j,0))%mod;
           
        }
    }
    
    
    return ans;
        
    }
};