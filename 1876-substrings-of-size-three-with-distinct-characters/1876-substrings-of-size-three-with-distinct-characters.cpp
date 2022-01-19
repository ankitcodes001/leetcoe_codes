class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size()<3)return 0; 
        int i =0;
        int j =0;
        int ans=0;
        unordered_map<char,int>mp;
        int k =3;
        while(j<s.size())
        {   mp[s[j]]++;
            if((j-i+1) < k)
                j++;
            
            else if((j-i+1) == k)
            {   if(mp.size()==3)
                ans++;
                
                mp[s[i]]--;
                
               if(mp[s[i]] == 0)
               mp.erase(s[i]);
               i++;
               j++;
                
            }
            
            
            
            
            
        }
        return ans;
       
    }
};