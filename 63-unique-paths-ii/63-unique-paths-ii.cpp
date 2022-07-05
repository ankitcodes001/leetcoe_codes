class Solution {
public:
    int dp[101][101];
    int countPath(vector<vector<int>>&mat,int x,int y,int n, int m)
    {
        if(x>=n || y >= m || mat[x][y] == 1)
            return 0;
        if(x == n-1 && y == m-1)
            return 1;
        if(dp[x][y]!= -1)
            return dp[x][y];
        else
            dp[x][y] = countPath(mat,x+1,y,n,m)+countPath(mat,x,y+1,n,m);
        return dp[x][y];
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& mat) 
    {
        int n = mat.size();
        int m = mat[0].size();
        memset(dp,-1,sizeof(dp));
        return countPath(mat,0,0,n,m);
        
    }
};