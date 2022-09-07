class Solution {
public:
    int dp[21][21];
    int  solve(vector<int>&nums,int start,int end)
    {   
        if(start > end)
            return 0;
        if(dp[start][end]!= -1)
            return dp[start][end];
        
        if(start == end)
            return dp[start][end] = nums[start];
        
        // first player plays optimally so we need to think for second player
        int a = nums[start]+(min(solve(nums,start+2,end),solve(nums,start+1,end-1)));
        int b = nums[end]+(min(solve(nums,start+1,end-1),solve(nums,start,end-2)));
        
        return dp[start][end] = max(a,b);                           
    }
    bool PredictTheWinner(vector<int>& nums) {
        
    if(nums.size() <= 2)
       return  true;
     memset(dp,-1,sizeof(dp));   
    int n = nums.size();    
    int ans =  solve(nums,0, n-1);
    int sum = 0;
    for(int i  = 0;i<nums.size();i++)
    {
        sum+=nums[i];
    }
    if(sum - ans > ans)
        return false;
    return true;    
        
    }
};