class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zero=0;
        int i=0;
        int j =0;
        int ans =INT_MIN;
        while(j<nums.size())
        {
            if(nums[j]==0)zero++;
            
                while(zero > 1)
                {
                    if(nums[i] == 0)
                        zero--;
                    i++;
                }
          ans = max(ans,j-i);
                j++;
                
           
                   
        }
        
        return ans == INT_MIN ?0:ans;
        
    }
};