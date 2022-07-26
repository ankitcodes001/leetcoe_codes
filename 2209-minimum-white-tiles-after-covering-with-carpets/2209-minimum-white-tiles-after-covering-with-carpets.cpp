class Solution {
public:
    int dp[1001][1001];
    
    int solve(int i , string &s,int n,int len)
    {
        if(i >=s.size())
            return 0;
        
        if(dp[i][n]!= -1)
            return dp[i][n];
        
        if(s[i] == '0')
            return dp[i][n] = solve(i+1,s,n,len);
        
        else
        {
            int ans = INT_MAX;
            
            ans = 1+solve(i+1,s,n,len);
            if(n>0)
                ans = min(ans,solve(i+len,s,n-1,len));
            return dp[i][n] = ans;
            
            
        }
        
    }
    
    int minimumWhiteTiles(string s, int n, int len) {
      memset(dp,-1,sizeof(dp));
      return solve(0,s,n,len);
        
    }
};