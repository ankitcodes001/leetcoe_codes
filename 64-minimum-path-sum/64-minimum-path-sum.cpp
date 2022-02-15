class Solution {
public:
    int minPathSum(vector<vector<int>>& a) {
       
        int n = a.size();
        int m = a[0].size();
        int dp[n][m];
        
        for(int i = n-1;i>=0;i--)
        {
            for(int j = m-1;j>=0;j--)
            {
                
                if(i==n-1 && j== m-1)
                {
                    dp[i][j] = a[i][j];
                }
                else if(i==n-1)
                {
                    dp[i][j] = dp[i][j+1]+a[i][j];
                }
                else if(j == m-1)
                {
                    dp[i][j] = dp[i+1][j]+a[i][j];
                  
                }
                else
                {
                    
                    
                    dp[i][j] = min(dp[i][j+1],dp[i+1][j])+a[i][j];
                    
                }
                
            }
        }
        
        return dp[0][0];
        
        
    }
};