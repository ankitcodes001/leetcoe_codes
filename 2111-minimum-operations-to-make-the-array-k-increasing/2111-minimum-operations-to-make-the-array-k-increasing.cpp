class Solution {
public:
    int kIncreasing(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        for(int i =0 ;i<k;i++)
        {
            vector<int>temp;
            for(int j  = i;j<n;j+=k)
            {
                if(temp.size() == 0 || nums[j]>= temp.back())
                {
                    temp.push_back(nums[j]);
                }
                else
                {
                    int ind = upper_bound(temp.begin(),temp.end(),nums[j])-temp.begin();
                    temp[ind] = nums[j];
                    
                }
            }
            
             ans+=temp.size();
            
            
        }
        
        
        return nums.size()-ans;
        
        
       
        
        
        
    }
};