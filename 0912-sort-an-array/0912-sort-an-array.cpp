class Solution {
public:
    void merge(vector<int>&a,int l,int mid,int r)
    {
        int i = l;
        int j = mid;
        int k = l;
        int n = a.size();
        int temp[n];
        while(i<=mid-1 && j<=r)
        {
            if(a[i]<=a[j])
            {
                temp[k] = a[i];
                i++;
                k++;
            }
            else
            {
                temp[k] = a[j];
                j++;
                k++;
            }
        }
        
        while(i<=mid-1)
        {
            temp[k] = a[i];
            i++;
            k++;
        }
        
        while(j<=r)
        {
            temp[k] = a[j];
            j++;
            k++;
        }
        for(int t = l;t<=r;t++)
        {
            a[t] = temp[t];
        }
        
    }
    void mergesort(int start,int end,vector<int>&nums)
    {
        if(start >= end)
            return;
            
        int mid = (start+end)/2;
        mergesort(start,mid,nums);
        mergesort(mid+1,end,nums);
        merge(nums,start,mid+1,end);
        
    }
    vector<int> sortArray(vector<int>& nums) {
    mergesort(0,nums.size()-1,nums);
    return nums;
        
    }
};