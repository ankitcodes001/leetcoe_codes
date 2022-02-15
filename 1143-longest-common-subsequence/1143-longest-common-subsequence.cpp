class Solution {
public:
    
    int dp[1002][1002];
    
    int find(string &s1, string &s2, int i ,int j)
    {
        if(i==0 || j==0)
            return 0;
        
        if(dp[i][j]!= -1)
            return dp[i][j];
        
        if(s1[i-1] == s2[j-1])
            return dp[i][j] = 1+find(s1,s2,i-1,j-1);
        else 
            return dp[i][j] = max(find(s1,s2,i-1,j),find(s1,s2,i,j-1));
      
        
        
        
        
        
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