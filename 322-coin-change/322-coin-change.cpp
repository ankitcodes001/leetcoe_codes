class Solution {
public:
    
    int coinChange(vector<int>& coin, int s) {
    int n = coin.size();
    int dp[n+1][s+1];
    for(int i  = 0;i<=n;i++)
    {
        for(int j = 0;j<=s;j++)
        {
            if(i == 0 || j == 0)
            dp[i][j] = (j == 0)?0:INT_MAX-1;
        }
    }
    for(int i = 1;i<=n;i++)
    {
        for(int j  = 1;j<=s;j++)
        {
            if(coin[i-1]<=j)
            {
                dp[i][j] = min(1+dp[i][j-coin[i-1]],0+dp[i-1][j]);
            }
            else
                dp[i][j] = 0+dp[i-1][j];
        }
    }
        
    if(dp[n][s] == INT_MAX-1) return -1;
        return dp[n][s];
        
    }
};