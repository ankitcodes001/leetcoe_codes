class Solution {
public:
    int countHillValley(vector<int>& nums) {
        
        vector<int>a;
        a.push_back(nums[0]);
        for(int i = 1;i<nums.size();i++)
        {
           if(nums[i]!=nums[i-1])
           {
               a.push_back(nums[i]);
           }
        }
        
        int ans =0;
        for(int i =1;i<a.size()-1;i++)
        {
            if(a[i]>a[i+1] && a[i]>a[i-1] || a[i]<a[i+1] && a[i]<a[i-1])
            {
                
                ans++;
                
            }
        }
        
        return ans;
        
    
    }
        
};