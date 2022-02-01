class Solution {
public:
    
    
    vector<int> maxScoreIndices(vector<int>& nums) {
        
        vector<int>ans;
        int one  = 0;
        int zero = 0;
        for(int i  =0;i<nums.size();i++)
        {
            one+=(nums[i] == 1);
            
        }
        
        int max_score = 0;
        for(int i = 0;i<=nums.size();i++)
        {
           if(zero+one > max_score )
           {
               max_score = zero+one;
               ans.clear();
          
           }
           if(zero+one == max_score)
           {
               ans.push_back(i);
           }
            
           if(i<nums.size())
           {
               zero+=(nums[i] == 0);
               one-=(nums[i] == 1);
               
               
           }
        }
            
            
            return ans;
            
            
        }
    
};