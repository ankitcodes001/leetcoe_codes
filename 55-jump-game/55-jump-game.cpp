class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int max_index =0;
        for(int i = 0;i<n;i++)
        {
            if(i>max_index)
                return false;
            
            int index = nums[i]+i;
            max_index = max(index,max_index);
            
            
        }
        
        return true;
        
        
    }
};