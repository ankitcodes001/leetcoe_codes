class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        
      vector<int>a,b;
      for(auto x : nums)
      {
          if(x>0)
          {
              a.push_back(x);
          }
          else
          {
              b.push_back(x);
          }
      }
        
       vector<int>ans;
        int i = 0;
        int j = 0;
        int n = a.size();
        int m = b.size();
        while(i<n && j<m)
        {
            ans.push_back(a[i++]);
            ans.push_back(b[j++]);
            
        }
        return ans;
            
    }
};