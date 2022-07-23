class Solution {
public:
    int minDistance(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        int dp[n+1][m+1];
        memset(dp,-1,sizeof(dp));
        for(int i  = 0;i<=n;i++)
        {
            for(int j  = 0;j<=m;j++)
            {
                
                if(i == 0 && j  == 0)
                {
                    dp[i][j] = 0;
                }
                else if(i == 0)
                {
                    dp[i][j] = dp[i][j-1]+1;
                }
                else if(j == 0)
                {
                    dp[i][j] =  dp[i-1][j]+1;
                    
                }
                else
                {
                    if(s1[i-1] ==  s2[j-1])
                    {
                        dp[i][j] = dp[i-1][j-1];
                    }
                    else
                    {
                        dp[i][j] = min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]})+1;
                    }
                    
                }
            }
        }
        
        
        return dp[n][m];
        
    }
};