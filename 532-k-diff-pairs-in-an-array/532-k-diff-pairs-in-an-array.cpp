class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        int i =0,j=1;
        while(j<nums.size() && i<nums.size())
        {
            if(nums[j]-nums[i] == k)
            {
                ans++;
                i++;
                j++;
                
                while(j<nums.size() && nums[j] == nums[j-1])
                    j++;
            }
            else if(nums[j]-nums[i] < k)
                j++;
            else
            {
                i++;
                if(i == j)
                {
                    j++;
                }
            }
         
        
        }
        return ans;
        
        
    }
};