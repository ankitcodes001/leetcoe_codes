class Solution {
public:
    int maxProfit(int k, vector<int>& a) {
        
        /* days
            4   2    1
  tran  0   0   0    0
        
        1   0   2    2     
        
        2   0   2    2
       
        */
        
        int n = a.size();
        if(n==0 || k==0)
            return 0;
        int dp[k+1][n];// dp - transaction - day;
        
        for(int i =0;i<=k;i++)
        {
            for(int j =0;j<n;j++)
            {
                if(i==0 || j ==0)
                    dp[i][j] =0;
                    
                
                
            }
        }
        
        for(int t =1;t<=k;t++)
        {
            for(int d = 1;d<n;d++)
            {
                int maxi  = dp[t][d-1];
                
                for(int pd =0;pd<d;pd++)
                {
                   int previous_day_profit = dp[t-1][pd]; // k-1 transaction
                    int transaction = a[d]-a[pd];
                    
                    maxi = max(previous_day_profit+transaction,maxi);
                    
                    
                    
                }
                
                dp[t][d] = maxi;
                
                
            }
        }
        
        return dp[k][n-1];
        
        
        
        
        
        
        
    }
};