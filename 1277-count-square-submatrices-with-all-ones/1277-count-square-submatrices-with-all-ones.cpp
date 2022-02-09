class Solution {
public:
    int countSquares(vector<vector<int>>& a) {
        
        int n = a.size();
        int m = a[0].size();
        int dp[n][m];
        
        
        for(int i =n-1;i>=0;i--)
        {
            for(int j =m-1;j>=0;j--)
            {
                
                if(i== n-1 && j == n-1)
                {
                    dp[i][j]=a[i][j];
                 
                }
                else if(i == n-1)
                {
                    dp[i][j]=a[i][j];
                        
                }
                else if(j == m-1)
                {
                    dp[i][j] = a[i][j];
                   
                }
                 
                else
                {
                    if(a[i][j] == 0)
                    {
                        
                        dp[i][j] = 0;
                        
                        
                    }
                    
                    else
                    {
                        int mini = min({dp[i][j+1],dp[i+1][j],dp[i+1][j+1]});
                        dp[i][j] = mini+1; 
                       
                    }
                    
                    
                    
                }
                
            
            }
        }
        
        int ans=0;
        for(int i =0;i<n;i++)
        {
            for(int j =0;j<m;j++)
            {
                ans+=dp[i][j];
            }
        }
        
        
        return ans;
        
        
        
        
    }
};