class Solution {
public:
    
    bool is_safe(vector<string>&chess,int row,int col)
    {// same row same col
       for(int i  =0;i<row;i++)
       {
           if(chess[i][col] == 'Q')
               return 0;
       }
     // diagaonally updward col+1,row-1
        for(int i = row-1,j=col+1;i>=0&& j<chess[0].size();i--,j++)
        {
            if(chess[i][j] == 'Q')
                return 0;
        }
        // diagaonally downward col-1,row-1
        for(int i = row-1,j=col-1;i>=0 && j>=0;i--,j--)
        {
            if(chess[i][j] == 'Q')
                return 0;
        }
        
        return 1;
        
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
        
        
        for(int i= 0;i<chess[0].size();i++)
        {
            if(is_safe(chess,row,i))
            {
                chess[row][i] = 'Q';
                solve(chess,ans,row+1);
                chess[row][i] = '.';
            }
            
        }
        
        
        
    }
    
    
    
    int totalNQueens(int n) {
        string s = "";
        for(int i  =  0;i<n;i++)
        {
            s+='.';
        }
        vector<string>chess(n,s);
        vector<vector<string>>ans;
        
        solve(chess,ans,0);
        return ans.size();
        
    }
};