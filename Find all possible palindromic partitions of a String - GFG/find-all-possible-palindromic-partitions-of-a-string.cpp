// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
  bool isPal(string t)
  {
      string p= t;
      reverse(p.begin(),p.end());
      return p==t;
  }
  vector<vector<string>>ans;
  vector<string>temp;
  
  void fun(string &s)
  {
      if(s.size()==0)
      {
          ans.push_back(temp);
          return;
      }
      for(int i =0;i<s.size();i++)
      {
          string left  = s.substr(0,i+1);
          string right = s.substr(i+1);
          if(isPal(left))
          {
              temp.push_back(left);
              fun(right);
              temp.pop_back();
              
              
          }
      }
      
      
      
  }
  
  
  
    vector<vector<string>> allPalindromicPerms(string s) {
        // code here
        
        fun(s);
        return ans;
        
        
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends