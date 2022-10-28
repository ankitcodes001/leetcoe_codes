class Solution {
public: 
    int shortestPath(vector<vector<int>>& grid, int k) {
        
        vector<vector<int>>dir = {{1,0},{0,1},{-1,0},{0,-1}};    
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, INT_MAX));
        vis[0][0] = 0;
        int steps = 0;
        
        queue<vector<int>> q;
        q.push({0,0,0});
        
        while(!q.empty())
        {
            int sz = q.size();
            for(int i = 0;i<sz;i++)
            {
                vector<int>curr = q.front();
                q.pop();
                
                int x = curr[0];
                int y = curr[1];
                
                if(x == n-1 && y == m-1)
                    return steps;
                
                for(int j = 0;j<dir.size();j++)
                {
                    int nx = x+dir[j][0];
                    int ny = y+dir[j][1];
                    
                    if(nx>=0 && nx<n && ny>=0 && ny<m)
                    {
                        int obs = curr[2]+grid[nx][ny];
                        
                        if(obs>=vis[nx][ny] || obs > k)
                            continue;
                        vis[nx][ny] = obs;
                        q.push({nx,ny,obs});
                        
                    }
                }
    
            }
             steps++;
            
             
        }
        return -1;
        
    }
};