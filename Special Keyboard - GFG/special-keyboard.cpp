//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    long long int optimalKeys(int n){
    vector<long long>dp(n+1,0);
    dp[0] =0 ;
    dp[1] =1;
    dp[2] =2;
    for(int i = 3;i<=n;i++)
    {
        dp[i] = i;
        for(int j =i-3;j>=1;j--)
        {
            dp[i] = max(dp[i],dp[j]+dp[j]*(i-(j+2)));
        }
    }
    return dp[n];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.optimalKeys(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends