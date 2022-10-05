class Solution {
public:
    int dp[300][300];
    int n,m;
    int solve(int ans,vector<vector<int>>&mat,int i,int j)
    {   if(dp[i][j]!= -1)
        return dp[i][j];
        ans=1;
        
        if(i+1 < n)
        {
         if(mat[i+1][j] > mat[i][j])
         ans = max(ans,1+solve(ans,mat,i+1,j));
        }

        if(j+1<m)
         {
         if(mat[i][j+1] > mat[i][j])
         ans = max(ans,1+solve(ans,mat,i,j+1));

        }
        if(i-1>=0)
        {
         if(mat[i-1][j] > mat[i][j])
         ans = max(ans,1+solve(ans,mat,i-1,j));

        }
        if(j-1>=0)
        {

         if(mat[i][j-1] > mat[i][j])
         ans = max(ans,1+solve(ans,mat,i,j-1));
        }
       
        return (dp[i][j] = ans);
        
    }
    int longestIncreasingPath(vector<vector<int>>& mat) {
     n = mat.size();
     m = mat[0].size();
    memset(dp,-1,sizeof(dp));
    int ans = INT_MIN;
    for(int i  = 0;i<mat.size();i++)
    {
        for(int j = 0;j<mat[0].size();j++)
        {
            ans = max(ans,solve(0,mat,i,j));
        }
    }
        
    return ans;    
    }
};