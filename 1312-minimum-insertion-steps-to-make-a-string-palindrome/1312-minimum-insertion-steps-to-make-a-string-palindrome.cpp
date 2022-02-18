class Solution {
public:
    int minInsertions(string s1) {
        int n = s1.size();
        int lcs =0;
        int dp[n+1][n+1];
        string s2  = s1;
        reverse(s1.begin(),s1.end());
        
        
        for(int i =0;i<=n;i++)
        {
            for(int j =0;j<=n;j++)
            {
                if(i==0 || j==0)
                    dp[i][j] =0;
            }
        }
        for(int i =1;i<=n;i++)
        {
            for(int j =1;j<=n;j++)
            {
                
                   if(s1[i-1] == s2[j-1])
                   {
                       dp[i][j] = 1+dp[i-1][j-1];
                   }
                   else
                       dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                lcs  =max(lcs,dp[i][j]);
            }
        }
        
       
        return n - lcs;
        
       
        
        
        
        
        
    }
};