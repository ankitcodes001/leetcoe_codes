class Solution {
public:
    
    vector<string>ans;
    void fun(string curr,int i ,string s)
    {
        if(i == s.size())
        {
            ans.push_back(curr);return;
        }
        if(isdigit(s[i]))
        {
            curr.push_back(s[i]);
            fun(curr,i+1,s);
            
        }
        else
        {
            string c1 = curr;
            c1.push_back(tolower(s[i]));
            fun(c1,i+1,s);
            
            string c2 = curr;
            c2.push_back(toupper(s[i]));
            fun(c2,i+1,s);   
        }
        
        
        
    }
    
    
    
    vector<string> letterCasePermutation(string s) {
        
        fun("",0,s);
        return ans;
        
    }
};