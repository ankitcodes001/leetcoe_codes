class Solution {
public:
      int dp[105][105][105];
    
    int dfs(vector<int>& arr, int left, int right, int streak)
    {
        
        if(left > right)
            return 0;
                
        if(dp[left][right][streak] != -1)
            return dp[left][right][streak];
        
        int ans = 0;
        ans = (streak+1)*(streak+1)+dfs(arr,left+1,right,0);
        for(int i = left+1;i<=right;i++)
        {
            if(arr[i] == arr[left])
            {
                ans = max(ans,dfs(arr,left+1,i-1,0)+dfs(arr,i,right,streak+1));
            }
        }
            
        return dp[left][right][streak] = ans;
    }
    
    int removeBoxes(vector<int>& boxes) {
        
        int n = boxes.size();
        
        memset(dp, -1, sizeof(dp));
        
        return dfs(boxes, 0, n - 1, 0);
    }
};