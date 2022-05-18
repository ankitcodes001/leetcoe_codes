class Solution {
public:
    
    int firstOcc(vector<int>&a,int k)
    {
        int res =-1;
        int start = 0;
        int end = a.size()-1;
        
        while(start <= end)
        {
            int mid = start+(end-start)/2;
            
            if(a[mid] == k)
            {
                res = mid;
                end = mid-1;
            }
            else if(k > a[mid])
            {
                start = mid+1;
            }
            else if( k < a[mid])
            {
                end = mid-1;
            }
            
            
            
        }
        
        
        return res;
        
        
        
    }
    
     int secondOcc(vector<int>&a,int k)
    {
        int res =-1;
        int start = 0;
        int end = a.size()-1;
        
        while(start <= end)
        {
            int mid = start+(end-start)/2;
            
            if(a[mid] == k)
            {
                res = mid;
                start = mid+1;
            }
            else if(k > a[mid])
            {
                start = mid+1;
            }
            else if( k < a[mid])
            {
                end = mid-1;
            }
            
            
            
        }
        
        
        return res;
        
        
        
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
     int a = firstOcc(nums,target);
     int b = secondOcc(nums,target); 
        
   return {a,b};
        
        
    }
};