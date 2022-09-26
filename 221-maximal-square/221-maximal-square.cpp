class Solution {
public:
    int maximalSquare(vector<vector<char>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    int dp[n+1][m+1];    
    int sz = 0;    
    for(int i  = 0;i<n;i++)
    {
        dp[i][0] = mat[i][0]-'0';
        sz = max(dp[i][0],sz);
    }
    for(int j = 0;j<m;j++)
    {
        dp[0][j] = mat[0][j]-'0';
        sz = max(dp[0][j],sz);
    }
        
    for(int i  =  1;i<n;i++)
    {
        for(int j = 1;j<m;j++)
        {
            if(mat[i][j] == '1')
            {
                 dp[i][j] = min({dp[i][j-1],dp[i-1][j],dp[i-1][j-1]})+1;   
            }
            else
            {
                dp[i][j] = 0;
            }
            
            sz = max(dp[i][j],sz);
        }
    }
        
    return sz*sz;
        
    }
};