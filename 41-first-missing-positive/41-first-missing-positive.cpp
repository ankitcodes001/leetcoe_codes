class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    
    // sort in such a way that from 1 should at their respective position 
   // and then simple compare with i+1
   // return ans;     
   int i = 0;
        int n = nums.size();
        while(i<nums.size())
        {
            if(nums[i]>=1 && nums[i]<=n && nums[i]!= nums[nums[i]-1])
            {
                swap(nums[i],nums[nums[i]-1]);
            }
            else
                i++;
        }
     for(auto x : nums)
         cout<<x<<" ";
    for(int j  = 0;j<nums.size();j++)
         if(j+1!= nums[j])
                return j+1;
        return n+1;

    }
};