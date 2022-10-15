class Solution {
public:
    
    int dp[105];
    int solve(vector<int>a,int i)
    {
        if(i<=-1)
            return 0;
        if(dp[i]!= -1)
            return dp[i];
        int take = solve(a,i-2)+a[i];
        int skip = solve(a,i-1);
        return dp[i] = max(skip,take);
    }
    int rob(vector<int>& nums) {
    int n = nums.size();
    if(n==1)
        return nums[0];
    if(n==2)
        return max(nums[0],nums[1]);
    vector<int>a,b;
    for(int i = 0;i<n;i++)
    {
        if(i<n-1)
        {
            a.push_back(nums[i]);
        }
        if(i>0)
        {
            b.push_back(nums[i]);
        }
    }
        
    memset(dp,-1,sizeof(dp));
    int ans1 = solve(a,a.size()-1);
    memset(dp,-1,sizeof(dp));
    int ans2 = solve(b,b.size()-1);
    return max(ans2,ans1);
        
        
    }
};