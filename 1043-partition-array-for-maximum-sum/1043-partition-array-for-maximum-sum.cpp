class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& a, int k) {
        int n = a.size();
       // dp[i] = a[i-1]
        //calculate mx value
           
        //dp[i] = max(dp[i],dp[i-j]+mx*j)   
        
    vector<int>dp(n+1);
    for(int i = 1;i<=n;i++)
    {
        dp[i] = a[i-1];
        int val =0;
        for(int j = 1;j<=k && i-j>=0;j++)
        {  
            
            val = max(val,a[i-j]);
            dp[i] = max(dp[i],dp[i-j]+val*j);
            
          
        }
        
        
    }
        return dp[n];
        
        
    }
};