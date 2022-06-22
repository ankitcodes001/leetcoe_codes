class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& mat) {
        
        long long sum = 0;
        // even number of negative number can be completety comverted into positive
        // in case of odd number of negative element we will simply make negative to smallest number
        // return max_sum;
        
    
        int n = mat.size();
        int m = n;
        int min_element = INT_MAX;
        long long ans = 0;
        int c =0;
        for(int i =0;i<n;i++)
        {    
            for(int j =0;j<m;j++)
            {
                if(mat[i][j] < 0)
                {
                    c++;
                   mat[i][j] = -1*mat[i][j];
                }
                min_element = min(mat[i][j],min_element);
                ans+=mat[i][j];
                
            }
        }
      
        if(c%2 == 0)
        {
            return ans;
        }
        return ans - (2*min_element);
     
        
        
        
    }
};