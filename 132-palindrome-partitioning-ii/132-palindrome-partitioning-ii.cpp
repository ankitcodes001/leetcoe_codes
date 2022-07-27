class Solution {
public:
     int dp[2001][2001];
    bool is_pal(string &s,int i, int j)
    {
        if(i==j)
            return true;
        while(i<=j)
        {
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        
        return true;
        
        
    }
    int solve(string &s,int i,int j)
    {
        if(i >=j)
            return 0;
        if(is_pal(s,i,j))
        {
            return dp[i][j] = 0;
        }
        if(dp[i][j]!= -1)
            return dp[i][j];
        
        int ans  = INT_MAX;
        for(int k = i;k<j;k++)
        { int temp;
            if(is_pal(s,i,k))
            {
                temp =  1+solve(s,k+1,j);
            }
          ans  = min(temp,ans);
            
             
        }
         return dp[i][j] = ans;
        
        
        
    }
    int minCut(string s) {
    int n  = s.size();
        
    memset(dp, -1,sizeof(dp));
    return solve(s,0,s.size()-1);
         
         
         
        
        
        
        
        
    }
};