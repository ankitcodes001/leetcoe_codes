class Solution {
public:
    int dp[100001];
    bool solve(int i,vector<int>&nums)
    {    int n = nums.size();
        if(i == nums.size())
            return true;
        if(i > nums.size())
            return false;
        if(dp[i]!= -1)
            return dp[i];
        
        if(i+1 < n && nums[i] == nums[i+1])
        {
            if(solve(i+2,nums))
               return dp[i] = true;
        }
        if(i+2 < n && nums[i] == nums[i+1] && nums[i+1] == nums[i+2])
        {
            if(solve(i+3,nums))
                return dp[i]= true;
       }
       if(i+2 < n && nums[i] == nums[i+1]-1 && nums[i+1] == nums[i+2]-1)
       {
           if(solve(i+3,nums))
               return dp[i] = true;
       }
        
        
        return dp[i] = false;
               
               
        
    }
    bool validPartition(vector<int>& nums) {
        
        memset(dp,-1,sizeof(dp));
        
        return solve(0,nums);
        
    }
};