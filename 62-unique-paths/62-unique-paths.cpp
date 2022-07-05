class Solution {
public:
    int uniquePaths(int m, int n) {
        
        // Since the robot can only move right and down, when it arrives at a point, it either arrives from left or above. If we use dp[i][j] for the number of unique paths to arrive at the point (i, j), then the state equation is dp[i][j] = dp[i][j - 1] + dp[i - 1][j]. Moreover, we have the base cases dp[0][j] = dp[i][0] = 1 for all valid i and j respectively.
        
        int path[m][n];
        for(int i =0;i<m;i++)
        {
            path[i][0] = 1;
        }
        for(int i =0;i<n;i++)
        {
            path[0][i] = 1;
        }
        
        for(int i =1;i<m;i++)
        {
            for(int j = 1;j<n;j++)
            {
                
                path[i][j] = path[i-1][j]+path[i][j-1];
                
            }
        }
        
        return path[m-1][n-1];
        
        
        
    }
};