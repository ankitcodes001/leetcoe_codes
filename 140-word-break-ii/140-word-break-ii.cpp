class Solution {
public:
    
    unordered_set<string>mp;
    vector<string>ans;
    
    void fun(int ind ,string s,string cur)
    {
        if(ind == s.size())
        {
            cur.pop_back();
            ans.push_back(cur);
            return;
        }
        
        string t = "";
        for(int i = ind ;i<s.size();i++)
        {
            t+= s[i];
            if(mp.find(t)!= mp.end())
            {
                fun(i+1,s,cur+t+" ");
            }
        }
        
        
        
        
        
    }
    
    vector<string> wordBreak(string s, vector<string>& word) {
    
        for(auto x : word)
        {
            mp.insert(x);
        }
        
        string cur = "";
        
        fun(0,s,cur);
        
        return ans;
        
        
        
    }
};