//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
#define ll long long
class Solution {

  public:
  int mod = 1e9+7;
  ll dp_sum[61][61][61];
  ll dp[61][61][61];
    int getSum(int x, int y, int z) {
        ll ans = 0;
    memset(dp,0,sizeof(dp));
    memset(dp_sum,0,sizeof(dp));
    dp[0][0][0] = 1;
    for(int i = 0;i<=x;i++)
    {
        for(int j = 0;j<=y;j++)
        {
            for(int k = 0;k<=z;k++)
            {
                if(i>0)
                {
                    dp_sum[i][j][k] += (dp_sum[i-1][j][k]*10 + 4*dp[i-1][j][k])%mod;
                    dp[i][j][k] += dp[i-1][j][k]%mod;
                }
                if(j>0)
                {
                    dp_sum[i][j][k] += (dp_sum[i][j-1][k]*10 + 5*dp[i][j-1][k])%mod;
                    dp[i][j][k] += dp[i][j-1][k]%mod;
                }
                if(k>0)
                {
                    dp_sum[i][j][k] += (dp_sum[i][j][k-1]*10 + 6*dp[i][j][k-1])%mod;
                    dp[i][j][k] += dp[i][j][k-1]%mod;
                }
                
                ans+= dp_sum[i][j][k]%mod;
                ans = ans%mod;
            }
        }
    }
	
	return ans;
	
        
        
        
        
        
        
        
        
        
        
        
        
        // Your code goes here
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        Solution ob;
        cout << ob.getSum(x, y, z) << "\n";
    }
    return 0;
}

// } Driver Code Ends