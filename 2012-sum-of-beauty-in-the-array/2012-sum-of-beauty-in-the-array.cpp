class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
     int n = nums.size();   
    
     vector<bool>prefix(n,false),suffix(n,false);
     int curr_max = nums[0];
     int curr_min = nums[n-1];
        
     for(int i = 0;i<n;i++)
     {
         if(nums[i] > curr_max)
         {
             prefix[i] = true;
             curr_max = nums[i]; 
         }
     }
     for(int i = n-2;i>=0;i--)
     {
         if(nums[i] < curr_min)
         {
           curr_min = nums[i];
           suffix[i] = true;
         }
        
     }
     int sum  = 0;   
     for(int i = 1;i<n-1;i++)
     {
         if(prefix[i] == true && suffix[i] == true)
             sum+=2;
         else if(nums[i-1]<nums[i] && nums[i] <nums[i+1])
             sum+=1;
         else
             sum+=0;
     }
  return sum;
    }
};