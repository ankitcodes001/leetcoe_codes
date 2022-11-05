class Solution {
public:
    int searchInsert(vector<int>& a, int x) {
        int n = a.size();
        int l =0;
        int r = n-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(a[mid] == x)
                return mid;
            else if(x>a[mid])
                l = mid+1;
            else
                r = mid-1;
        }
        
        return l;
        
    }
};