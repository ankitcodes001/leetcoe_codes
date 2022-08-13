class Solution {
public:
    int dp[105][10005];
    int solve(int e,int f)
    {
        if(e ==  1)
            return f;
        if(f == 1 || f== 0)
            return f;
        if(dp[e][f] != -1)
            return dp[e][f];
        
        int mn = INT_MAX;
        
        
//         for(int k = 1;k<=f;k++)
//         {
//             int temp = 1+max(solve(e-1,k-1),solve(e,f-k));
//             mn = min(temp,mn);
//         }
        
        int low = 0, high = f;
        int temp = 0;
        
        while(low <= high)
        {
            int mid = (low+high)/2;
            int left =  solve(e-1,mid-1);
            int right = solve(e,f-mid);
            
            
            temp = 1+max(left,right);
            
            if(left < right)
            {
                low = mid+1;
            }
            else
            {
                high  = mid-1;
            }
            
            mn = min(temp,mn);
            
            
            
        }
        
        
        
        
    return dp[e][f] = mn;
        
        
    }
    int superEggDrop(int k, int n) {
        memset(dp, -1,sizeof(dp));
        return solve(k,n);
        
        
    }
};