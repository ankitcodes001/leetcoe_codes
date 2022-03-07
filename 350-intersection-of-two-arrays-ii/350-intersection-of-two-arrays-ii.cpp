class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
    
      
      vector<int>v;
       
        
        unordered_map<int,int>mp,mp2;
        for(auto c : nums1)
        {   mp[c]++;
           
        }
        
       for(auto c : nums2)
       {
           if(mp.find(c)!= mp.end() && mp[c]>0)
           {
               v.push_back(c);
               mp[c]--;
           }
           
           
       }
          
      
        
    
        
        

        return v;
        
        
    }
};