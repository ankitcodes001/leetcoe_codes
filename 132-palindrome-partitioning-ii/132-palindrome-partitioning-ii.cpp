class Solution {
public:
    int dp[2001][2001];
    int mn = INT_MAX;
    bool is_palindrome(string &s,int i,int j)
    {
        if(i == j)
            return true;
        while(i<=j)
        {
            if(s[i++]!=s[j--])
                return false;
            
        }
        return true;  
    }
    
    int solve(string &s,int i,int j)
    {
        if(i>=j)
        {
            return 0;
        }
        if(is_palindrome(s,i,j))
        {
            return dp[i][j] = 0;
        }
        if(dp[i][j]!= -1)
            return dp[i][j];
        
        int ans  = INT_MAX;
        for(int k = i;k<j;k++)
        {  int temp;
         if(is_palindrome(s,i,k))
         {
             temp = 1+solve(s,k+1,j);
         }
        ans = min(ans,temp);
        }
        
        
        return dp[i][j] = ans;
    }
    
    int minCut(string s) {
    
    memset(dp,-1,sizeof(dp));
   
   int n = s.size()-1; 
    return solve(s,0,n);   
        
        
    }
};