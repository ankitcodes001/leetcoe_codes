class Solution {
public:
    
    int dp[1001][101][2];
    
    int solve(vector<int>&a,int i,int k ,int hold)
    {
        if(i>=a.size())
            return 0;
        if(dp[i][k][hold]!= -1)
            return dp[i][k][hold];
        int buy = 0,not_buy = 0,sell = 0,not_sell = 0;
        
        if(!hold && k>0)
            buy = solve(a,i+1,k-1,!hold)-a[i];
           not_buy = solve(a,i+1,k,hold);
            
        if(hold)
            sell = solve(a,i+1,k,!hold)+a[i];
            not_sell = solve(a,i+1,k, hold);
    return dp[i][k][hold] = max(max(buy,not_buy),max(sell,not_sell));
            
        
        
    }
    
    int maxProfit(int k, vector<int>& prices) {
     memset(dp, -1,sizeof(dp));
     return solve(prices,0,k,false);   
    }
};