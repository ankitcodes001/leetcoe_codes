class Solution {
public:
   
   /* 
   vector<string>v;
    void fun(string s,int x,int n)
    {
        if(x == n)
        {
            v.push_back(s);
            return;
        }
        
        
        
        
    }
    */
    
    string invert(string s)
    {
        for(int i =0;i<s.size();i++)
        {
            if(s[i] =='0')
            {
                s[i] = '1';
            }
            else
            {
                s[i] = '0';
            }
        }
        
        return s;
    }
    
    
    
    
    char findKthBit(int n, int k) {
        
       vector<string>v;
     string s = "0";
     v.push_back(s);   
        
   for(int i = 1;i<n;i++)
   {
       string temp = "";
       string inv = invert(v[i-1]);
       reverse(inv.begin(),inv.end());
       temp =  temp+ v[i-1]+"1"+inv;
       v.push_back(temp);
   }
        
  string ans  = v.back();
 
  return ans[k-1];      
        
        
    }
};