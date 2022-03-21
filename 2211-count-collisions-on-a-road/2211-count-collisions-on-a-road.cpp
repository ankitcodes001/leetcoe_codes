class Solution {
public:
    int countCollisions(string nums) {
        
        
        int ans =0;
       
        for(int i =0;i<nums.size()-1;i++)
        {
            if(nums[i] == 'R' && nums[i+1] == 'L')
            {
                ans+=2;
                nums[i] = 'S';
                nums[i+1] = 'S';
            }
        
            
        }
        
        
         int r =0;
         for(int i =0;i<nums.size();i++)
          {
            if(nums[i] == 'R') 
            {
              r++;
            }
            else if(nums[i] == 'S')
            {
                ans+=r;
                r=0;
            }
          }
        
        int l=0;
        
        for(int i = nums.size()-1;i>=0;i--)
        {
            if(nums[i] == 'L')
            {
               l++;
            }
            else if(nums[i] == 'S')
            {
                ans+= l;
                l=0;
            }
                
        }
        
        return ans;
        
        
        
        
        
        
        
        
        
    }
};