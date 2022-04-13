class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int curr_reach =0;
        int max_reach =0;
        
        int step = 0;
        
        for(int i =0;i<n-1;i++)
        {
            max_reach = max(nums[i]+i,max_reach);
            
            if(i == curr_reach)
            {
                step++;
                
                curr_reach = max_reach;
            }
            
            
        }
        
        return step;
    }
};