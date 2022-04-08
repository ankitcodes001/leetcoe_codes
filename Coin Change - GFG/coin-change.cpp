// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long int count(int a[], int m, int n) {
    
   vector<vector<long long int >>dp(m+1,vector<long long int>(n+1));
   for(int i =0;i<=m;i++)
   {
       for(int j =0;j<=n;j++)
       {
           
           if(i == 0)
           {
               dp[i][j] = 0;
           }
           if(j == 0)
           {
               dp[i][j] = 1;
           }
           if(i == 0 && j ==0)
           {
               dp[i][j] = 1;
           }
           
           
       }
   }
   
   for(int i = 1;i<=m;i++)
   {
       for(int j = 1;j<=n;j++)
       {
           
           if(a[i-1]<=j)
           {
               dp[i][j] = dp[i-1][j]+dp[i][j-a[i-1]];
           }
           else
           {
               dp[i][j] = dp[i-1][j];
           }
       }
   }
   
   
   
   return dp[m][n];
   
   
   
        // code here.
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends