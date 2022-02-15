class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        //size
       int n = nums.size();
        //prefix_min array // suffix max array
       int pmin[n],smax[n];
       
        // initialiazation 
       pmin[0]=nums[0];
       smax[n-1] = nums[n-1];
        
        if(n == 3)
         return nums[0]<nums[1] && nums[1]<nums[2];        
        
       for(int i =1;i<n;i++)
       {
           pmin[i] = min(pmin[i-1],nums[i]);
       }
        
       for(int i =n-2;i>=0;i--)
       {
           smax[i] = max(smax[i+1],nums[i]);
       }
       for(int i =0;i<n;i++)
       {
          if(pmin[i]<nums[i] && nums[i]<smax[i])
              return true;
       }
       
        
        
        
        
       
      return false;
       
        
        
        
    }
};