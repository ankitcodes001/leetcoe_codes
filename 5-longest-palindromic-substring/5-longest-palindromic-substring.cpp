class Solution {
public:
    string longestPalindrome(string s) {
      
    int n = s.size();    
    vector<vector<bool>>dp(n,vector<bool>(n,false));
    string ans = "";
        
     if(s.size() == 1)
         return s;
      
     for(int g =0;g<n;g++)
     {
         int i  =0;
         int j = g;
         while(j<n)
         {
             
             if(g==0)
             {
                 dp[i][j] = true;
                 
             }
             else if(g ==1)
             {
                 if(s[i] == s[j])
                 {
                     dp[i][j] = true;
                 }
             }
             else
             {
                 if(s[i] == s[j]  && dp[i+1][j-1]==true)
                 {
                     dp[i][j] = true;
                 }
                 else
                  dp[i][j] = false;
              
                 
             }
             
             
             if(dp[i][j] == true)
             {
                ans  = s.substr(i,g+1);
                 
             }
             
             i++;
             j++;
           
         }
         
         
     }
        
        
  return ans;
        
    }
};