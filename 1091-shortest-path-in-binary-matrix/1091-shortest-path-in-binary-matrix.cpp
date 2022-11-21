class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
    
    int row = grid.size();
    int col = grid[0].size();
    if(row == 0) return -1;
    if(col == 0) return -1;
    if(grid[0][0]!= 0 || grid[row-1][col-1]!= 0)
        return -1;
    queue<vector<int>>q;    
    vector<vector<int>>dir = {{-1,1},{1,1},{1,-1},{0,1},{1,0},{-1,0},{0,-1},{-1,-1}};
    grid[0][0] = 1;
    q.push({0,0});
    while(q.size()>0)
    {
        auto t = q.front();
        int x = t[0];
        int y = t[1];
        q.pop();
        if(x == row-1 && y == col - 1)
            return grid[x][y];
        
        for(auto d:dir)
        {
            int nx = x+d[0];
            int ny = y+d[1];
            if(nx>=0 && nx<row && ny>=0 && ny<col && grid[nx][ny] == 0)
            {
                grid[nx][ny] = grid[x][y]+1;
                q.push({nx,ny});
            }
        }
    }
        
    return -1;
    
    }        
};