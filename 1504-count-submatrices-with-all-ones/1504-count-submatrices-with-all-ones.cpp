class Solution {
public:
    int numSubmat(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        // prefix row sum
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(j==0)
                {
                    dp[i][j] = a[i][j];
                    
                }
                else{
                    if(a[i][j] == 1)
                    {
                        dp[i][j] = dp[i][j-1]+1;
                        
                        
                    }
                }
                
            }
        }
        
        int res = 0;
        for(int j = 0;j<m;j++)
        {
            for(int i = 0;i<n;i++)
            {
                int x = dp[i][j];
                //check till which column submatrix can be formed
                for(int k = i;k>=0 && dp[k][j]!=0;k--)
                {
                    
                    x= min(x,dp[k][j]);
                    res+=x;
                    
                }
                
                
            }
        }
        
        
        return res;
    
    }
};