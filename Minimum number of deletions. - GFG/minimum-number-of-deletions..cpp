// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}// } Driver Code Ends


int minDeletions(string s1, int n) { 
    
    string s2 = s1;
    reverse(s1.begin(),s1.end());
    int dp[n+1][n+1];
    for(int i =0;i<=n;i++)
        {
            for(int j =0;j<=n;j++)
            {
                if(i==0 || j==0)
                    dp[i][j] =0;
            }
        }
        
        int lps =0;
       
        for(int i =1;i<=n;i++)
        {
            for(int j =1;j<=n;j++)
            {
                if(s1[i-1] == s2[j-1])
                {
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                
                lps = max(lps,dp[i][j]);
            }
        }
        
        return n-lps;
       
        
    
    
    
    
    
} 