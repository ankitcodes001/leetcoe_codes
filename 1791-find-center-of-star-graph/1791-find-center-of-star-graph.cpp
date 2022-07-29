class Solution {
public:
    int findCenter(vector<vector<int>>& mat) {
        
        if(mat[0][0] == mat[1][0] || mat[0][0] == mat[1][1]) // every edge is connected to simgle node there must be common node 
            return mat[0][0];
        return mat[0][1];
    }
};