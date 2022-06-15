class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        
        int n = mat.size();
        
        vector<vector<int>>v(n,vector<int>(n,0));
        for(int i =0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                
                v[j][n-i-1] = mat[i][j];
                
                
            }
        }
        
        mat = v;
        
        
        
        
        
    }
};