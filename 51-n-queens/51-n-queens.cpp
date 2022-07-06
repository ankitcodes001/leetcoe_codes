class Solution {
public:
    // GAME RULES
//     1. NO TWO QUEEN SHOULD BE IN SAME ROW
//     2. NO TWO QUEEN SHOULD BE IN SAME COLUMN
//     3. NO TWO QUEEN SHOULD BE IN SAME DIAGAONAL   ""\ /""
//    5. OUR SOLUTION WILL BE SIMPLY TO PUT EACH QUEEN IN EACH COLUMNS OR ROWS
// MEANING WE NEED TO PUT EACH ONE ONE QUEEN IN SINGLE SINGLE ROW BY MAINTAINING THESE SAFETY CHECK;
    
    
    
    bool isSafe(vector<string>&chess,int row,int col)
    {
        for(int i = 0;i<row;i++)
        {
            if(chess[i][col]== 'Q')
                return false;
        }
        
        for(int i = row-1,j = col-1;j>=0 && i>=0;i--,j--)
        {
            if(chess[i][j] == 'Q')
                return false;
        }
          for(int i = row-1,j = col+1;j<chess[0].size() && i>=0;i--,j++)
        {
            if(chess[i][j] == 'Q')
                return false;
        }
        
        return true;
        
        
    }
    
    void solve(vector<vector<string>>&ans,vector<string>&chess,int row)
    {  
        if(chess.size() == 0)
            return;
        if(row == chess.size())
        {
            ans.push_back(chess);
            return;
        }
        
        for(int i = 0;i<chess[0].size();i++)
        {
            if(isSafe(chess,row,i))
            {
                chess[row][i] = 'Q';
                solve(ans,chess,row+1);
                chess[row][i] = '.';
            }
            
        }
        
        
    }
    
    
    
    vector<vector<string>> solveNQueens(int n) {
      
      string s =  "";
      for(int i  = 0;i<n;i++)
      {
       s+= '.';    
      }
      
    vector<string>chess(n,s);
    vector<vector<string>>v;
    solve(v,chess,0);
    return v;
        
        
        
        
    }
};