class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
     
        vector<int>pat_mp(26,0),temp(26,0);
        int k = p.size();
        for(int i =0;i<p.size();i++)
        {
            pat_mp[p[i]-'a']++;
        }
        int i =0,j=0;
        vector<int>ans;
        while(j<s.size())
        {
            temp[s[j]-'a']++;
            if(j-i+1  < k)j++;
            else if(j-i+1 ==k)
            {    if(temp == pat_mp)
                 ans.push_back(i);
                temp[s[i]-'a']--;
                i++;
                j++;
                
            }
            
            
        }
        
        return ans;
        
    }
};