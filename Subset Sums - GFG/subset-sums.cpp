// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
     void subset_sum(vector<int>a,int i, int sum, vector<int>&ans)
     { 
         if(i == a.size())
         {
             ans.push_back(sum);
             return;
         }
         
         subset_sum(a,i+1,sum,ans);
         subset_sum(a,i+1,sum+a[i],ans);
         
         
     }
   
    vector<int> subsetSums(vector<int> arr, int N)
    { vector<int>ans;
      subset_sum(arr,0,0,ans);
      return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends