class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
       
        
        
         int n = nums.size();
       vector<int>dp(n,1),way(n,1);
        int ans= 1;
      
        for(int i =0;i<n;i++)
        {
            for(int j = 0;j<i;j++)
            { 
                if(nums[j]<nums[i])      
                {
                    if(dp[i]<dp[j]+1)
                    {
                        dp[i]=dp[j]+1;
                        way[i] = way[j];
                        
                    }
                    else if(dp[i] == dp[j]+1)
                    {
                        way[i]+= way[j];
                    }
                }
                    
                
            }
            
            
            ans = max(ans,dp[i]);
           
        }
        
       int res =0;
        for(int i =0;i<n;i++)
        {
            if(dp[i] == ans)
                 res+= way[i];
        }
        return res;
        
        
        
    }
};