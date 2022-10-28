class Solution {
public: 
    int shortestPath(vector<vector<int>>& grid, int k) {
        
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dir = {{0,1},{1,0},{-1,0},{0,-1}};
        vector<vector<int>>vis(n,vector<int>(m,INT_MAX));
        queue<vector<int>>q;
        q.push({0,0,0});
        vis[0][0] = 0;
        
        int step = 0;
        
        while(q.size()>0)
        {
            int sz = q.size();
            for(int i = 0;i<sz;i++)
            {
                vector<int>curr = q.front();
                int x = curr[0];
                int y = curr[1];
                q.pop();
                if(x == n-1 && y == m-1)
                    return step;
                
                for(int j = 0;j<dir.size();j++)
                {
                    int nx = dir[j][0]+x;
                    int ny = dir[j][1]+y;
                    
                    if(nx>=0 && nx<n && ny>=0 && ny<m)
                    {
                        int obs = curr[2]+grid[nx][ny];
                        if(obs >= vis[nx][ny] || obs > k)
                            continue;
                        vis[nx][ny] = obs;
                        q.push({nx,ny,obs});     
                    }
                }
                
            }
            step++;
        }
    
    return -1;
    }
};