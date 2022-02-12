class Solution {
public:
    vector<string>v; string s = "abc";
    
    void fun(int n,char last,string temp)
    {
        if(n == 0)
        {
            v.push_back(temp);
                return;
        }
        
        for(auto c : s)
        {
            if(c!= last)
            {
                temp.push_back(c);
                fun(n-1,c,temp);
                temp.pop_back();
            }
            
        }
        
        
    }
    
    
   
    string getHappyString(int n, int k) {
        
       
       
        
        fun(n,'*',"");
        
        if(v.size() < k)
            return "";
        
        
        return v[k-1];
        
    }
};