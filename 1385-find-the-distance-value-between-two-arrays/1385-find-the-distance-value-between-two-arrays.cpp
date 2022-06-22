class Solution {
public:
    
    bool isValid(vector<int>&a,int target,int d)
    {
        
        int l = 0;
        int r =a.size()-1;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if(abs(a[mid]-target) <= d)
                return false;
            else if(a[mid] < target)
            {
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }
        
        return true;
        
        
        
        
    }
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
        sort(arr2.begin(),arr2.end());
        int ans =0;
       for(auto x : arr1)
       {
           if(isValid(arr2,x,d))
               ans++;
       }
        
        return ans;
    }
};