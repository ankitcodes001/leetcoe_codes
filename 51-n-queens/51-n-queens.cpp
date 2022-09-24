class Solution {
public:
    bool is_safe(vector<string>&mat,int row,int col)
    {
    for(int i = 0;i<row;i++)
    {
        if(mat[i][col] == 'Q')
        return false;
    }
    for(int i  = row-1,j=col-1;i>=0 && j>=0 ;i--,j--)
    {
        if(mat[i][j] == 'Q')
        return false;
    }
     for(int i  = row-1,j=col+1;i>=0 && j<mat[0].size();i--,j++)
    {
        if(mat[i][j] == 'Q')
        return false;
    }
    return true;
}
void solve(vector<vector<string>>&ans,vector<string>&mat,int row)
{
    if(mat.size() == 0)
    return;
    if(row == mat.size())
    {
        ans.push_back(mat);
        return;
    }
    for(int i = 0;i<mat[0].size();i++)
    {
        if(is_safe(mat,row,i))
        {
            mat[row][i] = 'Q';
            solve(ans,mat,row+1);
            mat[row][i] = '.';
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        string s = "";
for(int i = 0;i<n;i++)
{
    s+='.';
}
vector<string>mat(n,s);
vector<vector<string>>ans;
solve(ans,mat,0);
return ans;
        
    }
};