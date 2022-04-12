class Solution {
public:
       int dp[46];
    int climbStairs(int n) {
        if(n==0) return 1;
        if(n<0) return 0;
        
        if(dp[n]!=0)
            return dp[n];
        
        int a = climbStairs(n-1);
        int b = climbStairs(n-2);
        
        dp[n] = a+b;
        
        return dp[n];
        
        
    }
};