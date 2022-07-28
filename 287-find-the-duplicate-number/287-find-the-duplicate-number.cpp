class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     
        for(int i=0;i<nums.size();i++)
        {
            
            int x = abs(nums[i]);
            if(nums[x] < 0)
                return x;
            nums[x]*= -1;
        }
        
        return -1;
        
        
        
        
    }
};