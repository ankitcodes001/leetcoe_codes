class Solution {
public:
    int findLongestChain(vector<vector<int>>& v) {
        
         sort(v.begin(),v.end());
        int ans = 0;
        int n = v.size();
        int dp[n];
        for(int i = 0;i<n;i++)
        {
            dp[i]=1;
        }
        int maxi = 0;
        for(int i = 1; i<n;i++)
        {
            for(int j =0;j<i;j++)
            {
                if(v[i][0] > v[j][1] && dp[i] < dp[j]+1)
                {
                    dp[i]  = dp[j]+1; 
                }
                
            }
          
        }
        
        
        for(int i = 0;i<n;i++)
        {
            maxi = max(maxi,dp[i]);
        }
        return maxi;
        
        
    }
};