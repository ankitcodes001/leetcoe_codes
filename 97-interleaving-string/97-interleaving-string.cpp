class Solution {
public:
bool isInterleave(string s1, string s2, string s3) {
    
int n = s1.size();
int m = s2.size();        
vector<vector<int>>dp(n+1,vector<int>(m+1,0));
// when s1.size =0 and s2.size() - 0
if(n+m != s3.size())
    return 0;
dp[0][0] = 1;
        
// s1 is empty s1.size() -- 0 then s2 == s3
   for(int i = 1;i<=m;i++)
   {
       dp[0][i] = dp[0][i-1] &&(s2[i-1] == s3[i-1]);
   }
// when s2.size() == 0 then s1 == s3
   for(int i = 1;i<=n;i++)
   {
       dp[i][0] = (dp[i-1][0] && s1[i-1] == s3[i-1]);
           
   }
   // general case eith s1[i-1] == s3[k] || s2[j-1] == s3[k]
        for(int i = 1;i<=n;i++)
        {
            for(int j = 1;j<=m;j++)
            {
                int k = i+j-1;
                dp[i][j] = (dp[i-1][j] && s1[i-1] == s3[k]) || (dp[i][j-1] && s2[j-1] == s3[k]);
                
                
            }
        }
        
        
        return dp[n][m];
    }
};