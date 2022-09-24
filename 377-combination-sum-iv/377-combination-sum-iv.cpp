class Solution {
public:
    int dp[1005];
    int solve(vector<int>&nums,int sum)
    {
        if(sum < 0)
            return 0;
        if(sum == 0)
            return 1;
        if(dp[sum]!= -1)
            return dp[sum];
       int count = 0;
       for(int i = 0;i<nums.size();i++)
       {
           if(nums[i]<=sum)
           {
               count+=solve(nums,sum-nums[i]);
           }
       }
     return dp[sum] = count;
    }
    int combinationSum4(vector<int>& nums, int target) {
    memset(dp,-1,sizeof(dp));
    int n = nums.size();
    return solve(nums,target);    
    }
};