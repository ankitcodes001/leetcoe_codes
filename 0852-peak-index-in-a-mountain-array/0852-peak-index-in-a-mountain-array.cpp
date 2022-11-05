class Solution {
public:
    int solve(int l,int r,vector<int>&a)
    {
        int mid = (l+r)/2;
        
        if(a[mid]>a[mid-1] && a[mid] > a[mid+1])
            return mid;
        else if(a[mid] > a[mid-1])
            return solve(mid,r,a);
        else if(a[mid] > a[mid+1])
            return solve(l,mid,a);
        return -1;
        
        
    }
    int peakIndexInMountainArray(vector<int>& arr) {
     int n = arr.size();
     return solve(0,n-1,arr);
    }
};