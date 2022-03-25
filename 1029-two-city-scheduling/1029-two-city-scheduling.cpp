class Solution {
public:
    int dp[101][101][101];
    
    
    
    int fun(int i ,int a,int b ,vector<vector<int>>&nums)
    {
        if(i>=nums.size())return 0;
         int op1 = 1e9,op2 = 1e9;
        
        if(dp[i][a][b]!=-1)
        return dp[i][a][b];
        
       
        if(a)
        {
            op1 = nums[i][0]+fun(i+1,a-1,b,nums);
            
            
        }
        if(b)
        {
            
            op2 = nums[i][1]+fun(i+1,a,b-1,nums);
        }
            
       return dp[i][a][b] = min(op1,op2);
        
       
        
        
        
    }
    
    int twoCitySchedCost(vector<vector<int>>& nums) {
    memset(dp,-1,sizeof(dp));
        
    int a = nums.size()/2;
    int b = nums.size()/2;
    
        return fun(0,a,b,nums);
    
        
        
        
    }
};