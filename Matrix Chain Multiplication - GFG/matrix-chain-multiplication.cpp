// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
  int dp[501][501];
  
  int solve (int a[],int i ,int j)
  {
      if(i>=j)
      return 0;
      
      if(dp[i][j]!= -1)
      return dp[i][j];
      
      int mn = INT_MAX;
     
     for(int k = i;k<j;k++)
     {
         int temp = solve(a,i,k)+solve(a,k+1,j)+a[i-1]*a[j]*a[k];
         mn = min(temp,mn);
     }
     
     return dp[i][j]=mn;
      
      
      
      
      
  }
  
  
  
    int matrixMultiplication(int n, int a[])
    {
        int i =1;
        int j =n-1;
        memset(dp,-1,sizeof(dp));
        
        int ans  = solve(a,i,j);
        
        return ans;
        
        
        
        
        
        
        
        
        
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends