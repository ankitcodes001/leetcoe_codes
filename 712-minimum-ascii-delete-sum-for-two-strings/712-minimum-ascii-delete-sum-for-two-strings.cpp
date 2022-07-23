class Solution {
public:
   int dp[1001][1001];
    int solve(string &s1,string &s2,int i,int j)
    {
        if(i==0  || j == 0)
            return 0;
    
        if(dp[i][j]!=-1)
            return dp[i][j];
   
        if(s1[i-1] == s2[j-1])
        {
            return dp[i][j] = s1[i-1]+solve(s1,s2,i-1,j-1);
        }
        else return dp[i][j] = max(solve(s1,s2,i-1,j),solve(s1,s2,i,j-1));
    
    }
    
    int minimumDeleteSum(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        memset(dp,-1,sizeof(dp));
        int res = solve(s1,s2,n,m);
        
        // total- 2*res;
        
//         int dp[n+1][m+1];
//         for(int i = 0 ;i<=n;i++)
//         {
//             for(int j = 0;j<=m;j++)
//             {
//                 if(i == 0 || j == 0)
//                     dp[i][j] = 0;
//                 else
//                 {
//                     if(s1[i-1] == s2[j-1])
//                     dp[i][j] = s1[i-1]+dp[i-1][j-1];
//                     else
//                     dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                    
//                 }
//             }
//         }
        int total = 0;
        for(int i = 0;i<s1.size();i++)
        {
            total+=s1[i];

        }
        for(int i = 0;i<s2.size();i++)
        {
            total+= s2[i];

        }
        
        
        return total-2*res;
        
    }
};