class Solution {
public:
    vector<vector<int>>ans;
    void solve(int i ,vector<int>&nums)
    {
        if(i == nums.size())
        {
            ans.push_back(nums);
            return;
        }
        unordered_map<int,int>mp;
        for(int j = i;j<nums.size();j++)
        {
            if(mp[nums[j]] == 0)
            {
                swap(nums[i],nums[j]);
                solve(i+1,nums);
                swap(nums[j],nums[i]);
            }
            mp[nums[j]]++;
            
        }
        
        
    }
    
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
      solve(0, nums);
      return ans;
        
    }
};