class Solution {
public:
    
    int ans =0;
    void fun(vector<int>&nums,int i ,int curr,int target)
    {
        if(target == curr)
        {
          ans+=1;   
           
        }
        for(int j  = i;j<nums.size();j++)
        {
            fun(nums,j+1,curr|nums[j],target);
        }
        
        
        
        
    }
    int countMaxOrSubsets(vector<int>& nums) {
        
      
        int max_or = nums[0];
        for(int i =1;i<nums.size();i++)
        {
            max_or|= nums[i];
        }
        fun(nums,0,0,max_or);
        return ans;
        
      
        
    }
};