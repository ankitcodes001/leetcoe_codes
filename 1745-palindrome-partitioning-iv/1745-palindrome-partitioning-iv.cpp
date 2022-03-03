class Solution {
public:
    bool checkPartitioning(string s) {
        int n = s.size();
        
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        for(int g =0;g<n;g++)
        {
            for(int i =0,j=g;j<n;i++,j++)
            {
                if(g==0)
                    dp[i][j] = true;
                else if(g==1)
                {
                    if(s[i]== s[j])
                        dp[i][j]=true;
                }
                else
                {
                    if(s[i]==s[j] && dp[i+1][j-1])
                    {
                        dp[i][j]=true;
                    }
                    else
                    {
                        dp[i][j]=false;
                    }
                }
                
            }

        }
         
        // check palindromes for i to j where i =0 and j = n-1
        // and to check existence of three non empty subtrings we need to
        // check if(0,i) (i+1,j) (j+1, n-1) exists;
        
      for(int i = 0; i < n; ++i) {
            for(int j = i + 1; j < n - 1; ++j) {
                if(dp[0][i] && dp[i + 1][j] && dp[j + 1][n - 1]) return true;
            }
        }
        
        return false;
        
        
        
        
        
        
    }
};