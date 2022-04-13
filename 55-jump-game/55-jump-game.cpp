class Solution {
public:
    bool canJump(vector<int>& nums) {
    
        int max_reach = 0;
        int n = nums.size();
        
        for(int i =0;i<n;i++)
        {
            
            if(i>max_reach)
                return false;
            
            int index = nums[i]+i;
            
            max_reach = max(max_reach,index);
            
            
            
        }
        return true;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        return true;
        
        
    }
};