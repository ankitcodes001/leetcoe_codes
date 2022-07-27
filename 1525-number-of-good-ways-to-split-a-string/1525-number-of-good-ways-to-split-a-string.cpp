class Solution {
public:
    int numSplits(string s) {
        
        
        unordered_map<char,int>mp1;
        for(auto x : s)
        {
            mp1[x]++;
        }
        int dis = mp1.size();
        int ans = 0;
        unordered_map<char,int>mp2;
        for(int i = 0;i<s.size();i++)
        {
            if(mp1[s[i]])
              mp1[s[i]]--;
            mp2[s[i]]++;
            if(mp1[s[i]] == 0)
                dis--;
            if(mp2.size() ==  dis)
                ans++;   
        }
        
        
        return ans;
        
    }
};