// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>a, int s){
        // code here 
        int n = a.size();
        vector<vector<bool>>dp(n+1,vector<bool>(s+1));
        for(int i =0;i<=n;i++)
        {
            for(int j =0; j<=s;j++)
            {
                if(i==0)
                {
                    dp[i][j] = false;
                }
                if(j==0)
                {
                    dp[i][j] = true;
                }
                
            }
        }
        
        for(int i = 1;i<=n;i++)
        {
            for(int j = 1;j<=s;j++)
            {
                
                if(a[i-1]<=j)
                {
                    
                    dp[i][j] = dp[i-1][j]||dp[i-1][j-a[i-1]];
                
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
                
            }
        }
        
        
        
        
        return dp[n][s];
        
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends