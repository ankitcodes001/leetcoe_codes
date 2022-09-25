class Solution {
public:  
    
    
    bool is_safe(vector<vector<char>>&board,int row,int col,char x)
    {
        int n_row = 3*(row/3);
        int n_col = 3*(col/3);
        
        for(int i = 0;i<9;i++)
        {
            if(board[row][i] == x)
                return false;
            if(board[i][col] == x)
                return false;
            if(board[n_row+(i/3)][n_col+(i%3)] == x)
                return false;
        }
        return true;
    }

   
bool solve(vector<vector<char>>&board)
    {
        for (int i = 0; i <9; i++) {
            for (int j = 0; j <9; j++) {
              if (board[i][j] == '.') {
                for (char c = '1'; c <= '9'; c++) {
                  if (is_safe(board,i, j, c)) {
                    board[i][j] = c;

                    if (solve(board))
                      return true;
                    else
                      board[i][j] = '.';
                  }
                }

                return false;
              }
            }
          }
      return true; 
    }
  void solveSudoku(vector<vector<char>>& board) {
         solve(board);
    
    
    }
};