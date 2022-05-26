// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> a, long long n, long long x){
        
        // Your code here
        
    int start = 0;
        int end = n-1;
        
        int res = -1;
        
        while(start <= end)
        {
           int mid = start+(end-start)/2;
           if(a[mid] == x)
           return mid;
           else if(a[mid] < x)
           {
               res = mid;
               start = mid+1;
           }
           else
           {
               end = mid-1;
           }
           
           
        }
        return res;
        
    }
};


// { Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}  // } Driver Code Ends