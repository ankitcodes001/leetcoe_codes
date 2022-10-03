class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {  
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>>adj(n);
    vector<vector<int>>vis(n,vector<int>(m,0));
    queue<pair<int,int>>q;
    vector<vector<int>>ans(n,vector<int>(m));
        
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
          if(mat[i][j] == 0)
          {
              q.push({i,j});
              vis[i][j] = 1;
              ans[i][j] = 0;
          }
        }
    }
   vector<pair<int,int>>dir = {{1,0},{0,1},{-1,0},{0,-1}};    
        
    while(q.size())
    {
        auto it  = q.front();
        q.pop();
        for(int i = 0;i<dir.size();i++)
        {
            int nx = dir[i].first+it.first;
            int ny = dir[i].second+it.second;
          
            if(nx<0||nx>=n || ny<0||ny>=m || vis[nx][ny] == true)
                continue;
            vis[nx][ny] = 1;
            ans[nx][ny] = ans[it.first][it.second]+1;
            q.push({nx,ny});
        }
        
    }
        
    return ans;   
        
    }
};