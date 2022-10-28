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
            int size = q.size();
            for(int i=0; i<size; i++)
            {
                vector<int> current = q.front();
                q.pop();
                int x = current[0], y = current[1];
                
                if(x == n-1 && y == m-1)
                    return steps;
                
                for(int j=0; j<4; j++)
                {
                    int new_x = x+dir[j][0], new_y = y+dir[j][1];
                    if(new_x>=0 && new_y>=0 && new_x<n && new_y<m)
                    {
                        int obs = current[2] + grid[new_x][new_y];
                        if(obs>=vis[new_x][new_y] || obs>k)
                            continue;
                        vis[new_x][new_y] = obs;
                        q.push({new_x, new_y, obs});
                    }
                }
            }
            steps++;
        }
        return -1;
        
    }
};