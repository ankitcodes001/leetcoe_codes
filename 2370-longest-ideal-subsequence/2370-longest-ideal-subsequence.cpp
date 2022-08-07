class Solution {
public:
    int longestIdealString(string s, int k) {
    
        int n = s.size();
        vector<int>dp(26,0);
        dp[s[n-1]-'a'] = 1;
        for(int i = n-2;i>=0;i--)
        {
            
            int lmin = max(0,(s[i]-'a')-k);
            int rmax = min(25,(s[i]-'a')+k);
            
            int ans = 0;
            
            for(int j = lmin;j<=rmax;j++)
            {
            ans = max(dp[j],ans);
            }
            dp[s[i]-'a'] = max(ans,dp[s[i]-'a'])+1;
        }
        
        
        int ans = INT_MIN;
        for(int i = 0;i<26;i++)
        {
            ans = max(dp[i],ans);
        }
        return ans;
    }
};