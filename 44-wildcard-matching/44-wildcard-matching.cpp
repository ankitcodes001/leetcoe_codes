class Solution {
public:
    

    
      bool fun(string &s, string &p , int i ,int j,vector<vector<int>>&dp) 
      {
           if(j == p.size())
               return i == s.size();
           
          
           if(dp[i][j]!= -1) return dp[i][j];
          
        
        
            if(p[j] == '*')
            {
               return dp[i][j] = (i<s.size() && fun(s,p,i+1,j,dp)) ||fun(s,p,i,j+1,dp); 
            }
            if(i<s.size() &&(p[j] == '?' || s[i] == p[j]))
            {
              return dp[i][j] = fun(s,p,i+1,j+1,dp);
            }
          
              
         return dp[i][j] = 0;      
              
           
      }
    
    bool isMatch(string s, string p) {
        
        int n = s.size();
        int m = p.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        
        
        
        
        return fun(s,p,0,0,dp);
        
        
        
    }
};