class Solution {
public:
    int distinctSubseqII(string s) {
     
        int n = s.size();
        int mod  = 1000000000+7;
        
        vector<long long int>dp(n+1,0);
        dp[0] =1;
        
        map<char,int>mp;
        
        
        for(int i= 1;i<=n;i++)
        {
            char c = s[i-1];
            dp[i] = (2*dp[i-1])%mod;
            
            if(mp.count(c))
            {
                int j = mp[c];
                dp[i] =(dp[i]-dp[j-1])%mod;
             
                
            }
            
            
            mp[c] =i;
            
        }
        
        if(dp[n]<0) dp[n]+=mod;
        
        
        
       return (dp[n]-1); 
        
        
    }
};