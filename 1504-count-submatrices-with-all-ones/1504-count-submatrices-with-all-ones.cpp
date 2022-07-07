class Solution {
public:
    int numSubmat(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        // prefix column sum dp
//          1 0 1       1 0 1
//          1 1 0    => 2 1 0
//          1 1 0       3 2 0
     for(int i =0;i<n;i++)
     {
         for(int j =0;j<m;j++)
         {
             if(i==0)
             {
                 dp[i][j] = a[i][j];
             }
             else 
             {
                 if(a[i][j] == 1)
                 dp[i][j] = dp[i-1][j]+1;
             }
             
         }
     }
    
 // calculate the number of length till which dp[i][j]       
        
    int res = 0;
    for(int i =0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            int x = dp[i][j];
            
            // column prefix sum only vertical sum
            // now adding all the rows which can make the submatrixs
    
            
            for(int k = j;k>=0 && dp[i][k]!=0 ;k--)
            {
                x = min(x,dp[i][k]);
                res+=x;
            }
            
            
        }
    }
        
        return res;
        
        
    
    }
};