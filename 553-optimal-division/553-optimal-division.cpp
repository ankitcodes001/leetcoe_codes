class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        
        
        // [a,b,c,d] = a/(b/c/d)
        
        // 
        
        string res = "";
        int n = nums.size();
        for(int i =0;i<n;i++)
        {
            if(i>0)
            {
                res+= "/";
            }
            if(i == 1 && n>2)
            {
             
                res+= "(";
            }
            // "/(a/b/c)"
            
            
            res+= to_string(nums[i]);
            
            if(i == n-1 && n>2)
                res+= ")";
            
        }
        
        return res;
        
        
    }
};