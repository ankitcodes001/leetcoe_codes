class Solution {
public:
    
    int bs(vector<int>&a,int k,int start,int end)
    {   if(start > end)
        return -1;
        
        int mid = (start+end)/2;
        if(a[mid] == k)
            return mid;
     
        else if(k>a[mid])
            return bs(a,k,mid+1,end);
        else return bs(a,k,start,mid-1);
        
    }
    
    
    int get_pivot(vector<int>&a)
    {
        int s = 0;
        int e = a.size()-1;
        int mid = s+(e-s)/2;
        while(s<e)
        {
            
            if(a[mid]>=a[0])
                s = mid+1;
            else
                e = mid;
            
            mid = s+(e-s)/2;
        }
        return s;
    }
    
    
    int search(vector<int>& a, int k) {
    int p = get_pivot(a);
    int n = a.size();
    if(a[p] == k)
        return p;
    if(k>=a[p] && k<=a[n-1])
        return bs(a,k,p,n-1);
    else
        return bs(a,k,0,p-1);
        
    }
};