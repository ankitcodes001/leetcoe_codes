class Solution {
public:
    string longestPalindrome(string s) {
           int n = s.size();
           if(n == 1)
               return s;
        int dp[n][n];
        memset(dp,0,sizeof(dp));
        int start = 0,end=1;
        for(int i = 0;i<n;i++)
            dp[i][i] = 1;
        int i,c=1;
        
        for(int i = 0;c<n;i=0,c++)
        {
            for(int j = i+c;j<n;i++,j++)
            {
                if(s[i] == s[j] and (j-i==1 or dp[i+1][j-1]))
                {
                    dp[i][j] = 1;
                    start = i;
                    end = j-i+1;
                }
            }
        }
        string t = s.substr(start,end);
        cout<<t.size();
        return s.substr(start,end);
    
//         int length = s.size();
//         if(length==1)
//             return s;
        
//         int dp[length][length];
//         int start=0,end=1;
//         memset(dp,0,sizeof(dp));
        
//         for(int i=0;i<length;i++)
//             dp[i][i]=1;  
//         int i,c = 1;    
//         for(i=0;c<length;i=0,c++) {   
            
//             for(int j=i+c;j<length;j++,i++) { 
                
//                 if(s[i]==s[j] and (j-i==1 or dp[i+1][j-1])) {      
//                     dp[i][j]=1;
//                     start=i;
//                     end=j-i+1;
//                 }
//             }   
//         }

//         return s.substr(start,end);
        
    }
};