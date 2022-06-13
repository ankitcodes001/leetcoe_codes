class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        set<pair<int,int>>s;
        int n = mat.size();
        int m = mat[0].size();
        for(int i =0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j] == 0)
                {
                    s.insert({i,j});
                }
                
            }
                
        }
        
      for(auto  it : s)
      {
          int r = it.first;
          int c = it.second;
          
          for(int i = 0;i<n;i++)
          {
              mat[i][c] = 0;
          }
          for(int i = 0;i<m;i++)
          {
              mat[r][i] = 0;
          }
          
      }
        
        
    }
};