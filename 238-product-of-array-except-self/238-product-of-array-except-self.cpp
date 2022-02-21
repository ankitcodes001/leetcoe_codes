class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int start = 1;
        int end = 1;
        
        int n = nums.size();
        vector<int>ans(n,1);
        for(int i  =0; i<nums.size();i++)
        {
          
          ans[i]*=start;
           ans[n-1-i]*= end; 
            start*= nums[i];
          end*= nums[n-1-i];
            
        }
        return ans;
    }
};