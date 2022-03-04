class Solution {
public:
    
   /* 
    bool IsOne(string s1,string s2)
    {
        if(s1.size() == s2.size() && s1.size() == 1)
        {
            if(s1[0]!=s2[0])
                return true;
            else return false;
        }
        
        if(s1.size() == s2.size())
        {  int c=0;
            for(int i =0;i<s1.size();i++)
            {
                if(s1[i]!=s2[i])
                {
                    c++;
                }
            }
         
         if(c==1)
             return true;
         else
             return false;
        }
        
        return false;
        
        
    } 
    
    */
    
    int countSubstrings(string s, string t) {
        /*
        // generate substring s 
        vector<string>a;
        int n = s.size();
        
        for(int i =0;i<n;i++)
        {
            for(int len =1;len<=n-i;len++)
            {
                string temp = s.substr(i,len);
                a.push_back(temp);
           }
        }
        
        // susbtrings of t
        vector<string>b;
        
        int m = t.size();
        for(int i =0;i<m;i++)
        {
            for(int len =1;len<=m-i;len++)
            {
                string temp = t.substr(i,len);
                b.push_back(temp);
            }
        }
    
        int c =0;
        for(auto x:a)
        {
            for(auto y:b)
            {
                if(IsOne(x,y))
                {
                    c++;
                }
                
            }
        }
        
        
        
        return c;
        
       */
        int n = s.size();
        int m = t.size();
        
        int ans =0;
        
        for(int i =0;i<n;i++)
        {
            for(int j =0;j<m;j++)
            {  int diff =0;
                for(int k =0;i+k<n&& j+k<m;k++)
                {
                   
                        if(s[i+k]!=t[j+k])
                            diff++;
                        if(diff>1)
                          break;
                        ans+=diff;
                        
        
                    }
                }
                
            }
        
        
        return ans;
        
    }
};