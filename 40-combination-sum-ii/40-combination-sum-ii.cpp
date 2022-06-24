class Solution {
public:
    vector<int>curr;
    vector<vector<int>>ans;
    void fun(vector<int>&nums,int target,int start)
    {
        if(target == 0)
        {  ans.push_back(curr);
            return;
        }
        if( target <0 )
            return;
        
        for(int i  = start;i<nums.size();i++)
        {  if(i>start && nums[i] == nums[i-1]) continue;
            curr.push_back(nums[i]);
            fun(nums,target-nums[i],i+1);
            curr.pop_back();
        }
        
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        fun(nums,target,0);
        return ans;
        
        
    }
    
};