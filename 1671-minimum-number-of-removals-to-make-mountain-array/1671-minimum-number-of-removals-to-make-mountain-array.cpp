class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
       int n = nums.size();
        int lis[n];
        for(int i =0;i<n;i++)
        {    
              int maxi = 0;
            for(int j =0;j<i;j++)
            {
                
                if(nums[j]<nums[i])
                  maxi = max(lis[j],maxi);   
            }
            
            lis[i] = maxi+1;
        }
        
        int lds[n];
        for(int i  = n-1;i>=0;i--)
         {  int maxi = 0;
          for(int j = n-1;j>i;j--)
          { 
              if(nums[j]<nums[i])
              {
                  maxi = max(lds[j],maxi);
              }
        
          }
          lds[i] = maxi+1;
        
        }
        
        int over_max =0;
        for(int i =0;i<n;i++)
        { 
            if(lis[i]>1 && lds[i]>1)
            over_max = max(over_max,lds[i]+lis[i]-1);
        }
        
        return n-over_max;
        
        
        
        
        
        
        
        
    }
};