class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
       int one  = INT_MAX;
       int two  = INT_MAX;
       
       for(auto c : nums)
       {
           if(c < one)
           {
               one = c;
           }
           else if(one<c && (c<two))
           {
               two = c;
           }
           else if(two<c)
           {
               return true;
           }
           
           
       }
        
        return false;
       
         
        
    }
};