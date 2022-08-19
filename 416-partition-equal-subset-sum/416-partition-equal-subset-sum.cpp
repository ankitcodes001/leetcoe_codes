class Solution {
public:
    
    int dp[201][20001];
    bool subset(vector<int>&a,int sum,int n)
    {   
        if(n == 0 && sum == 0)
            return 1;
        if(sum == 0)
            return 1;
        if( n == 0)
            return 0;
        if(dp[n][sum]!= -1)
            return dp[n][sum];
        if(a[n-1]> sum)
            return dp[n][sum] = subset(a,sum,n-1);
        else return dp[n][sum] = subset(a,sum ,n-1) || subset(a,sum-a[n-1],n-1);
            
        
        
        
        
    }
    
    bool canPartition(vector<int>& nums) {
        
        memset(dp,-1,sizeof(dp));
        int sum  = 0;
        for(int i = 0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
     int n = nums.size();    
        if(sum%2!=0)
            return false;
    
        return subset(nums,sum/2,n);
        
    }
};