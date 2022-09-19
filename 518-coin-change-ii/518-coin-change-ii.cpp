class Solution {
public:
    int dp[300+1][5000+1];
    int countWays(int t,vector<int>&coin,int n)
    {
        if(n==0 || t == 0)
            return n == 0? 0:1;
        if(dp[n][t]!= -1)
            return dp[n][t];
        if(coin[n-1]>t)
        {
            return dp[n][t] = countWays(t,coin,n-1);
        }
        else
        return dp[n][t] = countWays(t,coin,n-1)+countWays(t-coin[n-1],coin,n); 
    }
    int change(int t, vector<int>& coin) {
    memset(dp,-1,sizeof(dp));
    int n = coin.size();
    return countWays(t,coin,n);    
    }
};