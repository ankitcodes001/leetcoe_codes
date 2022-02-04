// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int TotalWays(int n)
	{
	    long mod = 1000000007;
	    long end_s = 1;
	    long end_b = 1;
	    for(int i = 2;i<=n;i++)
	    {
	        long new_s = ((end_b % mod) +(end_s%mod))%mod;
	        long  new_b = (end_s%mod);
	        end_s = new_s;
	        end_b = new_b;
	        
	    }
	    
	   long  x = (end_s+end_b)%mod;
	   
	   x = (x*x)%mod;
	   return int(x);
	   
	    
	    
	    
	    
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends