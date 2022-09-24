class Solution {
public:
    set<vector<int>>ans;
    vector<int>temp;
    void solve(vector<int>&nums ,int idx,int sum)
    {   if(idx == nums.size() || sum < 0)
        return;
        if(sum == 0)
        {
            //sort(temp.begin(),temp.end());
            ans.insert(temp);
            return;
        }
        temp.push_back(nums[idx]);
        solve(nums,idx,sum-nums[idx]);
        temp.pop_back();
        solve(nums,idx+1,sum);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
     vector<vector<int>>v;
     solve(candidates,0,target);
     for(auto it:ans)
         v.push_back(it);
        return v;
    }
};