class Solution {
public:
    // memorization
    // time complexity = n;
    // space  = o(n)
    
   
    int find(vector<int>&nums,int i,vector<int>&dp)
    {
        if(i>=nums.size())
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        
      return  dp[i] = max(nums[i]+find(nums,i+2,dp),find(nums,i+1,dp));
        
    }
    
    int rob(vector<int>& nums) {
       
       vector<int> dp(nums.size()+1,-1);
    
        int i  =0;
        return find(nums,i,dp);
        
        
       
        
        
    }
};