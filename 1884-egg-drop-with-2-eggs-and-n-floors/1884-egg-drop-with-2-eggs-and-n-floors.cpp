class Solution {
public:
    int dp[3][1005];
    int solve(int e,int f)
    {
        if(e == 1)
            return f;
        if(f == 0 || f == 1)
            return f;
        if(dp[e][f] != -1)
            return dp[e][f];
     int mn = INT_MAX;
     for(int k = 1;k<=f;k++)
     {
         int temp = 1+max(solve(e-1,k-1),solve(e,f-k));
         mn = min(mn,temp);
         
     }
        
    return dp[e][f] = mn;

    }
    int twoEggDrop(int n) {
        
     memset(dp,-1,sizeof(dp));
     return solve(2,n);   
        
        
        
        
        
        
        
        
    }
};