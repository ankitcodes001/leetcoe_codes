class Solution {
public:
    int dp[101][101];
    int countPath(int x,int y,int n, int m)
    {
        if(x>=n || y >= m )
            return 0;
        if(x == n-1 && y == m-1)
            return 1;
        if(dp[x][y]!= -1)
            return dp[x][y];
        else
            dp[x][y] = countPath(x+1,y,n,m)+countPath(x,y+1,n,m);
        return dp[x][y];
    }
    
    
      
    
    
    int uniquePaths(int m, int n) {
        
        // Since the robot can only move right and down, when it arrives at a point, it either arrives from left or above. If we use dp[i][j] for the number of unique paths to arrive at the point (i, j), then the state equation is dp[i][j] = dp[i][j - 1] + dp[i - 1][j]. Moreover, we have the base cases dp[0][j] = dp[i][0] = 1 for all valid i and j respectively.
        
        memset(dp,-1,sizeof(dp));
        return countPath(0,0,m,n);
        
        
        
    }
};