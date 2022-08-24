class Solution {
public:
    
  
int first(vector<int>&a,int k)
{   int n = a.size();
    int l =0 ;
    int r = n-1;
 int res = -1;
   while(l<=r)
   {
       int mid =  l+(r-l)/2;
       if(a[mid] == k)
       {   res = mid;
           r = mid-1;
       }
       else if(k > a[mid])
        l = mid+1;
       else
           r = mid-1;
       
       
   }
  
    return res;
}

int last( vector<int>&a,int k)
{

    int n = a.size();
    int l =0 ;
    int r = n-1;
    int res = -1;
   while(l<=r)
   {
       int mid =  l+(r-l)/2;
       if(a[mid] == k)
       {
        res =  mid;
        l = mid+1;
       }
       else if(k > a[mid])
        l = mid+1;
       else
           r = mid-1;
       
       
   }
  
    return res;
}

    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
     int a = first(nums,target);
     int b = last(nums,target); 
        
   return {a,b};
        
        
    }
};