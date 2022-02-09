class Solution {
public:
    int numTilings(int n) {
        
        int mod = 1000000007;
        
        /*
        dp[n] = dp[n-1]+dp[n-2]+2*dp[n-3] ....... dp[0])
         .
         .
         .
         dp[n] = 2*dp[n-1] +dp[n-3]
        
        
        */
        
        
        if(n==1|| n==2)
            return n;
        
        int dp[n+1];
        dp[1]=1;
        dp[2]=2;
        dp[3] =5; // domino 3 tromino = 2
        for(int i =4;i<=n;i++)
        {
            dp[i] =((2*dp[i-1])%mod+(dp[i-3])%mod)%mod;
        }
        return dp[n]%mod;
        
    }
};