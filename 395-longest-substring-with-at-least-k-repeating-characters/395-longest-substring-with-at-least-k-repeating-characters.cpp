class Solution {
public:
    int longestSubstring(string s, int k) {
        
        if(k> s.size() || s.size() == 0) return 0;
        
        if(k == 0) return s.size();
        
        unordered_map<char,int>mp;
        for(int i =0;i<s.size();i++)
        {
            mp[s[i]]++;
            
            
        }
        
        int j =0;
        
        while(j<s.size() && mp[s[j]]>=k)
         j++;
        
        if(j== s.size()) return s.size();
           
        int l1 = longestSubstring(s.substr(0,j),k);
        int r1 = longestSubstring(s.substr(j+1),k);
        
            return max(l1,r1);
       
        
    }
};