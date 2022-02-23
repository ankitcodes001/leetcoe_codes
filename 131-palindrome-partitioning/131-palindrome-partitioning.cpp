class Solution {
public: vector<vector<string>>ans;
        vector<string>temp;
     bool isPal(string &s)
     {
         string s1= s;
         reverse(s.begin(),s.end());
         return s1==s;
         
         
     }
    void fun(string &s)
    {
        if(s.size()==0)
    {
        ans.push_back(temp);
        return;
        
    }
    
    for(int i  =0;i<s.size();i++)
    {
        string left = s.substr(0,i+1);
        string right = s.substr(i+1);
        if(isPal(left))
        {
            temp.push_back(left);
            fun(right);
            temp.pop_back();
        }
        
        
    }
        
        
        
        
        
    }
    
    
    vector<vector<string>> partition(string s) {
    
     fun(s);   
        
        
     return ans;
        
        
    }
};