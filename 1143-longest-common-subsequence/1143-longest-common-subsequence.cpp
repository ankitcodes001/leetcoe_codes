class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        
        // approach
        int n = s1.size();
        int m = s2.size();
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
       
        
        for(int i = 1;i<=n;i++)
        {
            for(int j =1;j<=m;j++)
                
            {
                if(n == 0 || m==0)
                    dp[i][j] =0;
                
                if(s1[i-1]==s2[j-1])
                
                    dp[i][j] = 1+dp[i-1][j-1];
               
                if(s1[i-1]!= s2[j-1])
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
        
        return dp[n][m];
        
        
        
        
    }
};