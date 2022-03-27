class Solution {
public:
    int minDeletion(vector<int>& nums) {
        
      //  if(nums.size() ==1)
       //     return 1;
        
       int ans =0;
        for(int i =0;i<nums.size()-1;i++)
        {
            
                if(nums[i] ==  nums[i+1])
                {
                    ans++;
                }
               else
               {
                   i++;
               }
               
            
        }
     
        if((nums.size()- ans)%2 == 1)
            ans++;
        
        return ans;
        
        
        
    }
};