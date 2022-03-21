class Solution {
public:
    
    
    
    // space = o(2^n)
    //time = o(2^n)
    vector<vector<int>>v;
    vector<int>temp;
    void fun(vector<int>&nums,int i,vector<int>temp)
    {
        if(i == nums.size())
        {
            v.push_back(temp);
            return;
        }
        
        
        if(temp.empty() || temp.back()!= nums[i])
        {
            fun(nums,i+1,temp);
        }
           temp.push_back(nums[i]);  
        fun(nums,i+1,temp);
       
        
        
        
        
        
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        fun(nums,0,temp);
        return v;
        
    }
};