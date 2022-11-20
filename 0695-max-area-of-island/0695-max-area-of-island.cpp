class Solution {
public:
    int dfs(int i,int j,vector<vector<int>>&grid)
    {
        if(i>=grid.size()||j>=grid[0].size() || i<0 || j<0)
            return 0;
        int area = 0;
        if(grid[i][j])
        {    grid[i][j] = 0;
            area = 1+dfs(i+1,j,grid)+dfs(i-1,j,grid)+dfs(i,j-1,grid)+dfs(i,j+1,grid);
        }
       return area;
            
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
       int area= 0;
        for(int i = 0;i<grid.size();i++)
        {
            for(int j = 0;j<grid[0].size();j++)
            {
                if(grid[i][j])
                {  
                    area = max(area,dfs(i,j,grid));
                }
            }
        }
        
    return area;
    }
};