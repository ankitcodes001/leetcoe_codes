// { Driver Code Starts
// C++ program to find minimum swaps
// required to group all 1's together
#include <bits/stdc++.h>

using namespace std;

// Function to find minimum swaps
// to group all 1's together
int minSwaps(int arr[], int n) ;


// Driver Code
int main() {
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout << minSwaps(a, n)<<endl;
    
    }

    return 0;
}
// } Driver Code Ends


int minSwaps(int a[], int n) {
    
    int one =0;
    for(int i =0;i<n;i++)
    {if(a[i]==1)one++;
    }
    
    if(one ==0)return -1;
    
    int k = one;
    int ans = 0;
    int max_one=0;
    int i =0,j=0,zero=0;
    
    for(;j<k;j++)
    {if(a[j] == 1)max_one++;
    }
    ans = max(ans,max_one);
    
    while(j<n)
    {
       if(a[i]==1)
       max_one--;
       if(a[j]==1)
       max_one++;
       
       ans = max(ans,max_one);
       i++;
       j++;
    
    
    }
    
    return one-ans;
    
    
}