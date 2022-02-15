class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        // optimal DP APPROACH
        // O(Nlongn)
        // CALCULATED LONGEST INCREASING SUBSEQUENCE ENDING AT EVERY POINT
       int n = nums.size();
        vector<int>dp;
        int ans = 0;
       for(int i  =0;i<n;i++)
       {  
           
           auto it  = lower_bound(dp.begin(),dp.end(),nums[i]);
           if(it == dp.end())
           {
               dp.push_back(nums[i]);
               
           }
           else
               *it = nums[i];
               
           
           
           
       }
        
       return dp.size();
        
    }
};