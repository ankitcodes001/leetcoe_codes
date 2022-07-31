class Solution {
public:
    int findCenter(vector<vector<int>>& mat) {
      int n = mat.size()+1;
        
      vector<int>adj[n+1];
      for(auto v : mat)
      {
          adj[v[0]].push_back(v[1]);
          adj[v[1]].push_back(v[0]);
      }
      
      for(int i = 1;i<=n;i++)
      {
          if(adj[i].size() == mat.size())
              return i;
      }
        return 0;
        
        
    }
};