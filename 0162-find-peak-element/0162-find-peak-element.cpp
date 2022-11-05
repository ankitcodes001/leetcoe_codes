class Solution {
public:
    int solve(int l,int r,vector<int>&a)
    {
        while(l<r)
        {
            int mid = l+(r-l)/2;
            if(a[mid] > a[mid-1] && a[mid] > a[mid+1])
                return mid;
            else if(a[mid] < a[mid-1])
                 r = mid-1;
            else if(a[mid] < a[mid+1])
                 l = mid+1;
        }
        return l;
    }
    int findPeakElement(vector<int>& nums) {
     int n = nums.size();
        if(n ==  1)
            return 0;
        if(nums[0] > nums[1])
            return 0;
        if(nums[n-1]>nums[n-2])
            return n-1;
        return solve(1,n-2,nums);
        
    }
};