class Solution {
public:int dp[2005][2005];
    bool isPal(string &s,int i ,int j)
    { if(i==j)
        return true;
     if(i>j)
     {
         return true;
     }
        
        while(i<j)
        {
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
        
    }
    
    int solve(string &s,int i ,int j)
    {
        if(i>j)
        {   dp[i][j] =0;
            return 0;
        }
        if(isPal(s,i,j) == true)
        {   dp[i][j] = 0;
            return 0;
        }
        if(dp[i][j]!= -1)
            return dp[i][j];
        
        int mn = INT_MAX;
        
        for(int k =i;k<j;k++)
        {
          if(isPal(s,i,k)) 
            mn = min(mn, 1 + solve(s,k+1,j));
        
        }
        
        return dp[i][j] = mn;
        
        
        
    }
    
    int minCut(string s) {
        
        int i  = 0;
        int j = s.size()-1;
        memset(dp,-1,sizeof(dp));
        int ans  = solve(s,i,j);
        return ans;
        
        
        
        
    }
};