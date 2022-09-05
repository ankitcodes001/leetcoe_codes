class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maxbit) {
        int n = nums.size();
        int prefix = nums[0] ^ ((1<<maxbit)-1);
        
        vector<int>v;
        v.push_back(prefix);
        for(int i  = 1;i<n;i++)
        {
            prefix = prefix  xor nums[i];
            
            v.push_back(prefix);
        }
        reverse(v.begin(),v.end());
        return v;   
    }
};