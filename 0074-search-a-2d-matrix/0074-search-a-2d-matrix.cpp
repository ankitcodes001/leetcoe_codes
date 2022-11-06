class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int k) {
     int a = mat.size();
     int b = mat[0].size();
     int l = 1;
     int r = a*b;
     while(l<=r)
     {
         int mid = (l+r)/2;
         int i = (mid-1)/b;
         int j = (mid-1)%b;
         if(mat[i][j] == k)
             return 1;
         else if(k>mat[i][j])
             l = mid+1;
         else
             r = mid-1;
         
     }
    return 0;
        
    }
};