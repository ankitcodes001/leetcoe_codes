// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	 #define ll long long
	ll countStrings(int n) {
	  
	  int mod = 1e9+7;
	  int dp1[n+1];
	  int dp0[n+1];
	  dp1[1]=1;
	  dp0[1]=1;
	  
	  
	  for(int i =2;i<=n;i++)
	  {
	      
	    dp1[i] = ((dp1[i-1]%mod)+(dp0[i-1]%mod))%mod;
	    dp0[i] = (dp1[i-1])%mod;
	  }
	  
	  return (dp1[n]+dp0[n])%mod;
	  
	  
	  
	  
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends