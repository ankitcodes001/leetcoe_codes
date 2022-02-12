class Solution {
public:
    
    string curr  = "";
    bool dfs(vector<vector<char>>&board,string word,int i ,int j,int n)
    {
        if(n == word.size()) return true;
        
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j] != word[n])
            return false;
       
        board[i][j] = '0';
        
        bool res  = dfs(board,word,i,j+1,n+1)|| dfs(board,word,i-1,j,n+1) || dfs(board,word,i+1,j,n+1)|| dfs(board,word,i,j-1,n+1);
        
        board[i][j] = word[n];
        
        return res;
        
        
        
        
        
        
        
    }
    
    
    
    bool exist(vector<vector<char>>& board, string word) {
        
        

        for(int i  =0 ;i<board.size();i++)
        {
            for(int j =0;j<board[0].size();j++)
            {
               if(dfs(board,word,i,j,0))
                  return true;
                
            }
        }
        
        
        return false;
        
        
    }
};