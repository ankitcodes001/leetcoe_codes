class Solution {
public:
    int dp[102][102][102];
    
    int solve(vector<int>&box,int left,int right,int streak)
    {
     int ans;
     if(left > right) return 0;
        
     if(dp[left][right][streak]!= -1)
        return dp[left][right][streak];
     
      if(left == right)
          return (streak+1)*(streak+1);
        
      ans = (streak+1)*(streak+1)+solve(box,left+1,right,0);
     
    for(int i = left+1 ; i<=right ;i++)
    {
        if(box[left] == box[i])
        {
            ans = max(ans,solve(box,left+1,i-1,0)+solve(box,i,right,streak+1));
        }
    }
        
    dp[left][right][streak] = ans;    
        
     return ans;
    }
    int removeBoxes(vector<int>& boxes) {
       memset(dp, -1,sizeof(dp));
        int n = boxes.size();
       return solve(boxes,0,n-1,0); 
    }
};