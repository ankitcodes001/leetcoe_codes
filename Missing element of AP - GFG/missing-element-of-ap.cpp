//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMissing(int a[], int n) {
        
        int l = 0;
        int r = n-1;
        int d = (a[n-1]-a[0])/n;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if((a[mid]-a[0])/d ==  mid)
            {
                l = mid+1;
            }
            else
            r = mid-1;
        }
        
        
        return a[r]+d;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMissing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends