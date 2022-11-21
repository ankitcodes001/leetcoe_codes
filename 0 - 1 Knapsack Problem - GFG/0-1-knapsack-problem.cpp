//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int dp[1005][1005];
    
    int solve(int a[],int val[],int n,int w)
    {
        if(n == 0 || w == 0)
        return 0;
        
        if(dp[n][w]!=-1)
        return dp[n][w];
        
        if(a[n-1]<=w)
        {
            return dp[n][w] =  max(val[n-1]+solve(a,val,n-1,w-a[n-1]),solve(a,val,n-1,w));
        }
        else
        return dp[n][w] = solve(a,val,n-1,w);
        
        
    }
    int knapSack(int w, int wt[], int val[], int n) 
    { 
    memset(dp,-1,sizeof(dp));
    return solve(wt,val,n,w);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends