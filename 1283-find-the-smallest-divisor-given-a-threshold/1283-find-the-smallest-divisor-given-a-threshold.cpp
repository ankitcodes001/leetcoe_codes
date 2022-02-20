class Solution {
public:
    int smallestDivisor(vector<int>& nums, int t) {
        
        int l  = 1;
        int r  = 10000001;
        
        int ans  =0;
        while(l<=r)
        {
            int sum =0;              
            long long int  mid  = l+(r-l)/2;
            
           
            for(int i  =0;i<nums.size();i++)
            {
                if(nums[i]%mid == 0)
                {
                    sum+= (nums[i]/mid);
                }
                else
                    sum+= (nums[i]/mid)+1;
                
            }
            
            if(sum>t)
            {
             l = mid+1;
                
            }
            else 
            {
             ans = mid;
             r=   mid-1;
            }
            
            
        }
        
        return ans ;
        
    }
};