class Solution {
public:
    vector<vector<int>>ans;
    vector<int>curr;
    
    void subset(vector<int>&nums,int start)
    {
       
        ans.push_back(curr);
            
        for(int i = start;i<nums.size();i++)
        {
            if(i>start && nums[i] == nums[i-1])
                continue;
            curr.push_back(nums[i]);
            subset(nums,i+1);
            curr.pop_back();
        }
        
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    // since we do not want duplicates
    // in each level we ll trying to get only unique subset
    // by putting one check if if(i>start && nums[i] == nums[i-1]) continue;
    // to get this done we need to sort the array [1,2,2]
     sort(nums.begin(),nums.end());
     subset(nums,0);   
     return ans;  
        
        
        
        
        
        
    }
};