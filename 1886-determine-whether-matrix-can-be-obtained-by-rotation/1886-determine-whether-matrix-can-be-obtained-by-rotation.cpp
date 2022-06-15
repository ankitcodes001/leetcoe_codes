class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
       
        int n = mat.size();
        for(int c  = 0 ;c <4 ;c++)
        {
            
        
        for(int i = 0;i<n;i++)
        {
            for(int j  = 0;j<i;j++)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
        
        for(int i = 0;i<n;i++)
        {
            reverse(mat[i].begin(),mat[i].end());
        }
      
         if (mat == target)
             return true;
            
            
        }
        
        return false;
    }
};