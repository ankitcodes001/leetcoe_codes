class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>v;
        set<int>s;
        set<int>s1;
        for(auto c : nums1)
        {
            s.insert(c);
        }
        
        for(auto c : nums2)
        {
          if(s.find(c)!=s.end())
          {
              s1.insert(c);
          }
        }
        
        for(auto c : s1)
        {
            v.push_back(c);
        }
        return v;

        
    }
};