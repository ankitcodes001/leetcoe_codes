class Solution {
public:
  
    
    int fib(int n) {
        if(n==0 || n==1)
            return n;
        int dp[n+1];
        dp[0]=0;
        dp[1] =1;
        
        int a = fib(n-1);
        int b = fib(n-2);
        dp[n]= a+b;
        return dp[n];
        
        
    }
};