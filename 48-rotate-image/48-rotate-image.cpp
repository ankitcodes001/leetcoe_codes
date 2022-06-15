class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        
        // transponse swap(a[i][j],a[j][i]) for j<i  (col<row)
        int n = mat.size();
        
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
        
        
        
        
    }
};