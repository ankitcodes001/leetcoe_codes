class Solution {
public:
    
    bool subset(vector<int>&a,int sum)
    {   int n = a.size();
        int s = sum;
        vector<vector<bool>>dp(n+1,vector<bool>(s+1));
        for(int i = 0;i<=n;i++)
        {
            for(int j = 0;j<=s;j++)
            {
                if(i == 0)
                {
                    dp[i][j] = false;
                }
                if(j == 0)
                {
                dp[i][j] = true;
                }
            }
        }
        
     for(int i = 1;i<=n;i++)
     {
         for(int j = 1;j<=s;j++)
         {
             if(a[i-1]<=j)
             {
                 dp[i][j] = dp[i-1][j]||dp[i-1][j-a[i-1]];
             }
             else
                 dp[i][j] = dp[i-1][j];
         }
     }
        
        return dp[n][s];
        
    }
    
    bool canPartition(vector<int>& nums) {
        
        int sum  = 0;
        for(int i = 0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        
        if(sum%2!=0)
            return false;
        return subset(nums,sum/2);
        
    }
};