class Solution {
public:
    vector<string>ans;
    unordered_set<string>dict;
    
    void fun(string s,string curr, int i)
    {
        if(i==s.size())
        {  
            curr.pop_back();
            ans.push_back(curr);
            return;
        }
        
        string temp  =  "";
        
       for(int j  = i;j<s.size();j++)
       {
        // add character 
        // if presenst add space and funcall();
        temp+=s[j];
        if(dict.find(temp)!=dict.end())
        {
            fun(s,curr+temp+" ",j+1);
        }
           
       
       }
        
        
        
        
        
        
        
    }
    
    
    vector<string> wordBreak(string s, vector<string>& wordDict) {
    
     for(auto x : wordDict)
     {
         dict.insert(x);
     }
        
     fun(s,"",0);   
        
     return ans;   
        
        
        
        
        
    }
};