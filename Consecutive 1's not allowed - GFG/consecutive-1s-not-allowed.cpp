// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	  
	  int mod = 1e9+7;
	  int old_0=1;
	  int old_1=1;
	  for(int i =2;i<=n;i++)
	  {
	      
	      int new_1 = (old_0)%mod;
	      int new_0 = ((old_1%mod)+(old_0%mod))%mod;
	      
	      old_1 = new_1;
	      old_0 = new_0;
	  }
	  
	  return (old_1+old_0)%mod;
	  
	  
	  
	  
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