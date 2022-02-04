class Solution {
public:
    int rob(vector<int>& nums) {
        
        
        int inc = nums[0];
        int exc = 0;
        for(int i  = 1;i<nums.size();i++)
        {
         
           int include = exc + nums[i];
            int exclude = max(inc,exc);
            inc = include;
            exc = exclude;
            
            
        }
        
        return max(exc,inc);
        
    }
};