class Solution {
public:
    int maxUncrossedLines(vector<int>&a, vector<int>&b) {
        
        int lcs =0;
        int n = a.size();
        int m = b.size();
        int dp[n+1][m+1];
        for(int i  =0;i<=n;i++)
        {
            for(int j  =0;j<=m;j++)
            {
                if(i == 0 || j == 0)
                    dp[i][j] =0;
            }
        }
        
        
        for(int i  =1;i<=n;i++)
        {
            for(int j  =1;j<=m;j++)
            {
                if(a[i-1] == b[j-1])
                {
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                
                lcs = max(lcs,dp[i][j]);
            }
        }
        
        
        return lcs;
    }
    
};