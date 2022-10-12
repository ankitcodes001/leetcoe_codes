class Solution {
public:
    int minMoves(vector<int>& nums) {
    
    int x = *min_element(nums.begin(),nums.end());
    int ans = 0;
    for(int i = 0;i<nums.size();i++)
    {
        ans+=abs(x-nums[i]);
    }
    return ans;
        
    }
};