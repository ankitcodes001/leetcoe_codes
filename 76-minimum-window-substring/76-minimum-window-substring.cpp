class Solution {
public:
    string minWindow(string s, string p) {
        unordered_map<char,int>mp;
        for(auto x:p)mp[x]++;
        int i =0,j=0,start=0,len =INT_MAX;
        int count = mp.size();
        while(j<s.size())
        {
            if(mp.find(s[j])!=mp.end())
            {
                mp[s[j]]--;
                if(mp[s[j]] == 0)count--;
                
            }
            
            while(count==0)
            {
                if(j-i+1 <len)
                {
                    start =i;
                    len  = j-i+1;
                }
                if(mp.find(s[i])!=mp.end())
                {
                    mp[s[i]]++;
                    if(mp[s[i]] ==  1)count++;
                    
                }
                i++;
                
            }
            j++;
            
        }
        
        
        return len == INT_MAX ? "":s.substr(start,len);
    }
};