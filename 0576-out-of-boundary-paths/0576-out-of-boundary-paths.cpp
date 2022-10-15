#define ll long long
class Solution {
public:
    ll  dp[52][52][52];
    ll row,col;
    ll mod = 1e9+7;
    
    ll solve(int i ,int j,int move,int max_move)
    {
        if(i<=-1 || i>=row || j<=-1 || j>=col)
            return 1;
        if(move == max_move)
            return 0;
        
        if(dp[i][j][move]!= -1)
            return dp[i][j][move];
        
        ll a = solve(i+1,j,move+1,max_move);
        ll b = solve(i-1,j,move+1,max_move);
        ll c = solve(i,j-1,move+1,max_move);
        ll d = solve(i,j+1,move+1,max_move);
        
        return dp[i][j][move] = (a%mod + b%mod + c%mod + d%mod)%mod;
        
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
    row = m;
    col = n;
    memset(dp,-1,sizeof(dp));
    return solve(startRow,startColumn,0,maxMove);
    }
};