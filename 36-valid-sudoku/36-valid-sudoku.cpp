class Solution {
public:
    bool is_safe(vector<vector<char>>&board,int row,int col,char x)
    {
        int n_row = 3*(row/3);
        int n_col = 3*(col/3);
        for(int i =0;i<9;i++)
        {
           if(board[i][col] == x)
               return false;
          if(board[row][i] == x)
              return false;
          if(board[n_row+(i/3)][n_col+(i%3)] == x)
                return false;
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0;i<9;i++)
        {
            for(int j = 0;j<9;j++)
            {
                if(board[i][j]!= '.')
                {
                    char  temp = board[i][j];
                    board[i][j] = '*';
                    if(is_safe(board,i,j,temp) == false)
                        return false;
                    board[i][j] = temp;
                }
            }
        }
        
        
     return true;   
    }
};