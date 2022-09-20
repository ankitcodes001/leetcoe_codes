class Solution {
public:
    int dp[1005][2005];
    int solve(vector<vector<int>>&piles,int pos,int k)
    {
        if(pos == piles.size() ||  k==0)
            return 0;
        if(dp[pos][k]!=-1)
            return dp[pos][k];
        int ans = solve(piles,pos+1,k);
        int sum  = 0;
        int res = INT_MIN;
        for(int i  = 0;i<k && i<piles[pos].size();i++)
        {
            sum+=piles[pos][i];
            res = max(sum+solve(piles,pos+1,k-i-1),res);
        }
        return dp[pos][k] = max(res,ans);
        
    }
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
    memset(dp,-1,sizeof(dp));    
    return solve(piles,0,k);    
    }
};