class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if(n==1)
            return s;
        int dp[n][n];
        memset(dp,0,sizeof(dp));
        for(int i = 0;i<n;i++)
            dp[i][i] = 1;
        
        int start = 0,end =1;
        int c =1;
        for(int i =0;c<n;i=0,c++)
        {
            for(int j = i+c;j<n;j++,i++)
            {
                if(s[i] == s[j] and (j-i == 1 or dp[i+1][j-1]))
                {
                    dp[i][j] = 1;
                    start = i;
                    end = j-i+1;
                }
            }
        }
        
        return s.substr(start,end);
    }
};