class Solution {
public:
    
    bool isPal(string &s,int i ,int j)
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
    
    int dp[2001][2001];
    int fun(string &s,int i ,int j)
    {
        if(i>=j)
            return 0;
        if(isPal(s,i,j))
        {
            dp[i][j] =0;
            return 0;
        }
        if(dp[i][j]!= -1)
            return dp[i][j];
        
        int ans = INT_MAX;
        for(int k =i;k<j;k++)
        { int temp;
             if(isPal(s,i,k))
             {
                 temp=1+fun(s,k+1,j);
             }
            ans= min(temp,ans);
        }
        
        return dp[i][j]=ans;
        
    }
    
    
    int minCut(string s) {
        int n = s.size();
        memset(dp,-1,sizeof(dp));
        int i =0;
        
        int j =n-1;
        
        return fun(s,i,j);
        
        
        
    }
};