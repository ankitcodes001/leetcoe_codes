class Solution {
public:
    
    
    bool checkSum(int s,vector<int>&nums)
    {
        int n = nums.size();
        bool dp[n+1][s+1];
        for(int i =0;i<=n;i++)
        {  for(int j =0;j<=s;j++)
            {
                if(i == 0)
                    dp[i][j] = false;
                if(j == 0)
                   dp[i][j] = true; 
            }
        }
        
        
        for(int i =1;i<=n;i++)
        {
            for(int j = 1;j<=s;j++)
            {
                
                if(nums[i-1]<=j)
                {
                    dp[i][j] = dp[i-1][j-nums[i-1]] || dp[i-1][j];
                }
                else
                    dp[i][j] = dp[i-1][j];
                
                
            }
        }
        
        return dp[n][s];
        
        
    }
    
    bool canPartition(vector<int>& nums) {
        
        int sum = 0;
        for(auto x : nums) 
        {
            sum+=x;
        
        }
        if(sum%2 == 1)
            return false;
        else
        {
            return (checkSum(sum/2,nums));
          
        }
        
        
    }
};