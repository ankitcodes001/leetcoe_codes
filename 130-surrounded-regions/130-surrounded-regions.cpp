class Solution {
public:  
     void DFS(vector<vector<char>>& mat,int i,int j)
     {
         if(i<0 || i>=mat.size() || j<0 || j>=mat[0].size() || mat[i][j]!= 'O')
             return;
         
         mat[i][j] = '#';
         DFS(mat,i+1,j);
         DFS(mat,i-1,j);
         DFS(mat,i,j+1);
         DFS(mat,i,j-1);
     }
    void solve(vector<vector<char>>& mat) {

        
        for(int i = 0;i<mat.size();i++)
        {
            if(mat[i][0] == 'O')
            {
                DFS(mat,i,0);
            }
            
        }
        for(int i = 0;i<mat.size();i++)
        {
            if(mat[i][mat[0].size()-1] == 'O')
            {
                DFS(mat,i,mat[0].size()-1);
            }
        }
        
        for(int j  = 0;j<mat[0].size();j++)
        {
            if(mat[0][j] == 'O')
            {
                DFS(mat,0,j);
            }
            
        }
        for(int j  = 0;j<mat[0].size();j++)
        {
            if(mat[mat.size()-1][j] == 'O')
            {
                DFS(mat,mat.size()-1,j);
            }
        }
        
        for(int i  = 0;i<mat.size();i++)
        {
            for(int j  = 0;j<mat[0].size();j++)
            {
                
                if(mat[i][j] == 'O')
                {
                    mat[i][j] = 'X';
                }
                else if(mat[i][j] == '#')
                {
                    mat[i][j] = 'O';
                    
                }
                
                
            }
        }
        
        
    }
};