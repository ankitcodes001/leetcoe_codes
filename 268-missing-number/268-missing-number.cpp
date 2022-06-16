class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        set<int>s;
        for(auto x : nums)
        {
            s.insert(x);
            
        }
        set<int>s1;
        for(int i  =0;i<=nums.size();i++)
        {
            s1.insert(i);
        }
        
        for(auto x : s1)
        {
            if(s.find(x) == s.end())
            {
                return x;
            }
        }
        
        
        return -1;
    }
    
};