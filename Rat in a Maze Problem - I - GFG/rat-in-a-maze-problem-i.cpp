// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    vector<string>ans;
    void backtrack(int r,int c,vector<vector<int>>&m,int n,string s)
    {
        if(r<0 || c<0 || r>=n ||c>=n || m[r][c] == 0)return;
        
        if(r == n-1 && c == n-1)
        {
            ans.push_back(s);
            return;
        }
        
        m[r][c] =0;
        
        backtrack(r,c+1,m,n,s+'R');
        backtrack(r,c-1,m,n,s+'L');
        backtrack(r+1,c,m,n,s+'D');
        backtrack(r-1,c,m,n,s+'U');
        
        m[r][c] =1;
        
        return;
        
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        
        
        backtrack(0,0,m,n,"");
        return ans;
        
        
        
        
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends