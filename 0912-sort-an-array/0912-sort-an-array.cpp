class Solution {
public:
    void merge(vector<int>&nums,int l,int mid,int r)
    {
        if(l>=r)
            return;
        int i = l;
        int j = mid+1;
        vector<int>temp;
        while(i<=mid && j<=r)
        {
            if(nums[i]<nums[j])
            {
                temp.push_back(nums[i]);
                i++;
            }
            else
            {
                temp.push_back(nums[j]);
                j++;
            }
            
        }
        if(i>mid)
        {
            while(j<=r)
            {
                temp.push_back(nums[j]);
                j++;
            }
        }
        else
        {
            while(i<=mid)
            {
                temp.push_back(nums[i]);
                i++;
            }
        }    
    int k  = 0;
        
    for(int i = l;i<=r;i++)
    {
        nums[i] = temp[k];
        k++;
    }
        
        
        
    }
    void mergesort(int start,int end,vector<int>&nums)
    {
        if(start >= end)
            return;
            
        int mid = (start+end)/2;
        mergesort(start,mid,nums);
        mergesort(mid+1,end,nums);
        merge(nums,start,mid,end);
        
    }
    vector<int> sortArray(vector<int>& nums) {
    mergesort(0,nums.size()-1,nums);
    return nums;
        
    }
};