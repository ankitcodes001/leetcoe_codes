class Solution {
public:
    int find(vector<int>&nums,int t)
    {
       int n = nums.size();
        int dp[n+1][t+1];
        for(int i =0;i<=n;i++)
        {
            for(int j =0;j<=t;j++)
            {
                if(i==0)dp[i][j] =0;
                if(j==0)dp[i][j] =1;
        
                
            }
        }   
        
        for(int i =1;i<=n;i++)
        {
            for(int j =0;j<=t;j++)
            { 
                if(nums[i-1]<=j)
                {
                    dp[i][j] = dp[i-1][j-nums[i-1]]+dp[i-1][j];
                      
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
              
            }
        }
        
        
        return dp[n][t];
        
               
        
    }
    
    
    int findTargetSumWays(vector<int>& nums, int target) {
    
        int sum =0;
        for(int i =0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        target = abs(target);
        int t= sum-target;
        if(t%2!= 0 || sum < target)return 0;
        else return find(nums,t/2);
        
        
    }
};