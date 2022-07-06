class Solution {
public:
//     GAME RULES
//     1. NO TWO QUEEN SHOULD BE IN SAME ROW
//     2. NO TWO QUEEN SHOULD BE IN SAME COLUMN
//     3. NO TWO QUEEN SHOULD BE IN SAME DIAGAONAL   ""\ /""
//     5. OUR SOLUTION WILL BE SIMPLY TO PUT EACH QUEEN IN EACH COLUMNS OR ROWS
//     MEANING WE NEED TO PUT EACH ONE ONE QUEEN IN SINGLE SINGLE ROW BY MAINTAINING THESE SAFETY CHECK;
    bool is_safe(vector<string>&chess, int row,int col)
    {
        // same row col
        for(int i =0;i<row;i++)
        {
            if(chess[i][col] == 'Q')
                return false;
        }
        // diagonally right row-1,col+1
        for(int i = row-1,j=col+1;i>=0 && j<chess[0].size();i--,j++)
        {
            if(chess[i][j] == 'Q')
                return false;
        }
        // diagonally left row-1,col-1
        for(int i = row-1,j = col-1;i>=0 && j>=0;i--,j--)
        {
            if(chess[i][j] == 'Q')
                return false;
        }
  
        return true;
        
    }
    
    void solve(vector<string>&chess,vector<vector<string>>&ans,int row)
    {
        if(chess.size() == 0)
            return;
        if(row == chess.size())
        {
            ans.push_back(chess);
            return;
        }
        
        for(int i =0;i<chess[0].size();i++)
        {
            if(is_safe(chess,row,i))
            {
                chess[row][i] = 'Q';
                solve(chess,ans,row+1);
                chess[row][i] = '.';

                
            }
        }
        
        
        
    }
    
    
    
    
    
    vector<vector<string>> solveNQueens(int n) {
        
        string s =  "";
        for(int i =0;i<n;i++)
        {
            s+='.';
        }
        vector<string>chess(n,s);
        vector<vector<string>>ans;
        solve(chess,ans,0);
        return ans;
        
        
        
        
    }
};