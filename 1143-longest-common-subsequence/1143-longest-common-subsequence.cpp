class Solution {
public:
    
    int dp[1002][1002];
    
    int find(string &s1, string &s2, int n ,int m)
    {
        if(n==0 || m==0)
            return 0;
        
        if(dp[n][m]!= -1)
            return dp[n][m];
        
        if(s1[n-1] == s2[m-1])
            return dp[n][m] = 1+find(s1,s2,n-1,m-1);
        else 
            return dp[n][m] = max(find(s1,s2,n-1,m),find(s1,s2,n,m-1));
    
    }
    
    int longestCommonSubsequence(string s1, string s2) {
        
        // approach
        int n = s1.size();
        int m = s2.size();
        
        memset(dp,-1,sizeof(dp));
        
        int z = find(s1,s2,n,m);
        if(z== -1)
            return 0;
        return z;
        
        
    }
};