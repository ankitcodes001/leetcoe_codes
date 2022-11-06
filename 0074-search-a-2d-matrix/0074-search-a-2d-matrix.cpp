class Solution {
public:
    bool bs(vector<int>a,int k)
    {
        int l = 0;
        int r = a.size()-1;
        while(l<=r)
        {
            int  mid = (l+r)/2;
            if(a[mid] == k)
                return 1;
            else if(k>a[mid])
                l = mid+1;
            else
                r = mid-1;
        }
        return 0;
    }
    bool searchMatrix(vector<vector<int>>& mat, int k) {
     int r = mat.size();
     int i = 0;
     while(i<r)
     {
         if(bs(mat[i],k))
             return 1;
         i++;
     }
    return 0;
        
    }
};