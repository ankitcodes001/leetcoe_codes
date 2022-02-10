class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        // NAIVE DP APPROACH
        // O(N^2)
        // CALCULATED LONGEST INCREASING SUBSEQUENCE ENDING AT EVERY POINT
       
        int n = nums.size();
        int dp[n];
        int ans= 0;
        for(int i =0;i<n;i++)
        {
            int maxi = 0;
            for(int j = 0;j<i;j++)
            { 
                if(nums[j]<nums[i])
                {
                    maxi = max(maxi,dp[j]);
                    
                }
                
            }
            
            dp[i] = maxi+1;
            ans = max(ans,dp[i]);
        }
        
        return ans;      
    }
};