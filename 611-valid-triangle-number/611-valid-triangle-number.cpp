class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(),nums.end());
        for(int i = n-1;i>=0;i--)
        {
            int l = 0;
            int h = i-1;
            
            while(l <= h)
            {
                if(nums[l]+nums[h] > nums[i])
                {  
                    ans+= h-l;
                    h--;
                }
                else
                {
                    l++;
                }
                
                
            }
            
        }
        
        
        return  ans;
    }
};