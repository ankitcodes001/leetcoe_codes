class Solution {
public:
    vector<string> wordSubsets(vector<string>& s1, vector<string>& s2) {
        
        vector<int>freq(26,0);
        int n = s1.size();
        
        for(int i =0;i<s2.size();i++)
        {
           vector<int>cf(26,0);
            for(auto c:s2[i])
            {
                cf[c-'a']++;
                
            }
            
            for(int j =0;j<26;j++)
          freq[j] = max(freq[j],cf[j]);
        }
        
        vector<string>ans;
        
        
        for(int i =0;i<s1.size();i++)
        {
            vector<int>cf(26,0);
            for(auto c:s1[i])
            {
                cf[c-'a']++;
            }
            
            bool subset = true;
            for(int j =0;j<26;j++)
            {
                if(cf[j]<freq[j])
                {
                    subset = false;
                    break;
                }
            }
            
            if(subset)
            {
                ans.push_back(s1[i]);
                
            }
            
        }
        
        
        return ans;
        
        
        
        
        
    }
};