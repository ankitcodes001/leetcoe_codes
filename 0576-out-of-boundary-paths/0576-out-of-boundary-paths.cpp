class Solution {
public:
    long long mod = 1e9+7;
    long long row,col;
    long long dp[52][52][52];
    int solve(int i,int j,int k,int max_move)
    {
        if(i<=-1 || j<=-1|| i>=row || j>=col)
            return 1;
        if(k == max_move)
            return 0;
        if(dp[i][j][k]!= -1)
            return dp[i][j][k];
        
        
       int a = solve(i+1,j,k+1,max_move);
       int b = solve(i-1,j,k+1,max_move);
       int c =  solve(i,j-1,k+1,max_move);
       int d = solve(i,j+1,k+1,max_move);
        
      return dp[i][j][k] = (a%mod + b%mod + c%mod + d%mod)%mod;  
        
        
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
       row = m;
        col = n;
        memset(dp,-1,sizeof(dp));
        long long ans = solve(startRow,startColumn,0,maxMove);
    return ans;
        
    }
};