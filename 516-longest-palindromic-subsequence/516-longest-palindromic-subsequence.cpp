class Solution {
public:
    int longestPalindromeSubseq(string s) {
        
        // APPROACH 
        
      //  string  = c1 + m + c2
       //if(c1 == c2) 
         //  dp[i][j] = 2 + dp[i+1][j-1] // 2+lps()
         //else
         //{
           //  dp[i][j] = max(dp[i][j-1],dp[i+1][j]);
         //}
        
        int n = s.size();
        int dp[n][n];
        for(int g =0;g<n;g++)
        {
            int i  =0;
            int j =g;
            while(j<n)
            {
                if(g==0)
                  dp[i][j] = 1;
                else if(g == 1)
                {
                    dp[i][j] = (s[i] == s[j])?2:1;
                    
                }
                else
                {
                    if(s[i] == s[j])
                    {
                        dp[i][j] = 2+dp[i+1][j-1];
                    }
                    else
                    {
                        dp[i][j] = max(dp[i][j-1],dp[i+1][j]);
                    }
                    
                    
                    
                }
                
                
                
           i++;
                j++;
                
                
                
                
            }
            
            
            
        }
        
        
        
        return dp[0][n-1];
        
        
        
        
        
        
    }
};