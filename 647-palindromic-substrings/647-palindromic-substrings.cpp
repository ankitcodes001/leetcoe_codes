class Solution {
public:
    int countSubstrings(string s) {
        
        int n = s.size();
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        
        int count  =0;
        for(int g =0;g<n;g++)
        {
            int i =0;
            int j = g;
            while(j<n)
            {
                if(g==0)
                {
                    dp[i][j] = true;
                    
                }
                else if(g==1)
                {
                    if(s[i]==s[j])
                    {
                        dp[i][j] = true;
                    }
                  
                }
                else
                {
                    if(s[i] == s[j] && dp[i+1][j-1] == true)
                        dp[i][j] = true;
                    else
                        dp[i][j] = false;
                }
                
                if(dp[i][j])
                {
                    count++;
                }
                
                i++;
                j++;
                
            }
            
          
        }
        
        return count;
        
        
    }
};