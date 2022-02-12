class Solution {
public:
    
    
    int dfs(vector<vector<int>>&grid,int i ,int j)
    {
        if(i<0 || j<0 || i>=grid.size() ||j>=grid[0].size())
            return 0;
        if(grid[i][j] == 0)
            return 0;
        
        int curr = grid[i][j];
        grid[i][j] = 0;
        
        int res = curr+max({dfs(grid,i,j+1),dfs(grid,i+1,j),dfs(grid,i-1,j),dfs(grid,i,j-1)});
        
        grid[i][j] = curr;
        
        return res;
        
        
        
        
        
    }
    
    int getMaximumGold(vector<vector<int>>& grid) {
        
        int max_val  =0;
        for(int i  =0;i<grid.size();i++)
        {
            for(int j  =0;j<grid[0].size();j++)
            {
                
                if(grid[i][j]!=0)
                {
                    
                    max_val = max(max_val,dfs(grid,i,j));
                    
                }
                
                
            }
        }
        
        
        return max_val;
    }
};