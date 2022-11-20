class Solution {
public:
    vector<vector<int>>ans;
    set<vector<int>>s;
    vector<int>temp;
    void solve(vector<int>&nums,int i,int k)
    {
        if(i == nums.size() || k<0)
            return;
        
        if(k == 0)
        {
            s.insert(temp);
            return;
        }
        
        temp.push_back(nums[i]);
        solve(nums,i,k-nums[i]);
        temp.pop_back();
        solve(nums,i+1,k);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int k) {
    solve(nums,0,k);
    for(auto t:s)
        ans.push_back(t);
        
    return ans;
    }
};