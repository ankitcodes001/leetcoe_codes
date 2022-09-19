class Solution {
public:
    int dp[1005][2005];
    int solve(vector<vector<int>>&p,int i,int k)
    {   
        if(i == p.size() || k == 0)
            return  0;
       if(dp[i][k]!= -1)
           return dp[i][k];
      int sum = 0;  
      int ans = solve(p,i+1,k);  
      int res = INT_MIN;
      for(int j=0;j<k && j<p[i].size();j++)
      {
          sum+=p[i][j];
          res = max(res,solve(p,i+1,k-j-1)+sum);
      }
      return dp[i][k] = max(res,ans);
    }
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
     memset(dp,-1,sizeof(dp));
     return solve(piles,0,k);
    }
};