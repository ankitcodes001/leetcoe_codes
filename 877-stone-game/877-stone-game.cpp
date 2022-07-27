class Solution {
public:
    int dp[501][501];
    int solve(vector<int>&nums,int i,int j)
    {
        if(i>j)
            return  0 ;
        if( i == j)
            return dp[i][j] = nums[i];
            
        if(dp[i][j]!=-1)
            return dp[i][j];
        int a = nums[i]+solve(nums,i+1,j);
        int b = nums[j]+solve(nums,i,j-1);
        
        return dp[i][j] = max(a,b);
        
        
    }
    bool stoneGame(vector<int>& nums) {
    int n = nums.size();
    memset(dp, -1,sizeof(dp));
    int a = solve(nums,0,n-1);
    int total = 0;
    for(auto x : nums) total+=x;
        int b = total-a;
        return a > b; 
        
        
    }
};