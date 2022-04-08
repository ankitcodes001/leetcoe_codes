class Solution {
public:
    
    int findways(vector<int>&coin,int n ,int t,vector<vector<int>>&dp)
    {
        if(n <= 0)
            return INT_MAX-1;
        if(t == 0)
            return 0;
        if(dp[n][t]!=-1)
            return dp[n][t];
        
        if(coin[n-1]>t)
        {
            return dp[n][t] = findways(coin,n-1,t,dp);
        }
        else
        {
            return dp[n][t] = min(findways(coin, n-1,t,dp) , 1+findways(coin, n, t-coin[n-1],dp));
        }
        
        
        
        
    }

    
    
    int coinChange(vector<int>& coin, int amount) {
        
        
        int n = coin.size();
        
        vector<vector<int>>dp(n+1,vector<int>(amount+1, -1));
        
        
        int res  =findways(coin, n, amount,dp);
        
        if(res == INT_MAX || res == INT_MAX-1)
         return -1;
        
        return res;
        
        
        
    }
};