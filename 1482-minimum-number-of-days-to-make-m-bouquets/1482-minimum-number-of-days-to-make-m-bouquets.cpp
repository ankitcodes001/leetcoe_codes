class Solution {
public:
    
    bool static check(vector<int>&a,int m,int k,int mid)
    {
     int count = 0;
        int ans  = 0;
        
        for(int i=0;i<a.size();i++)
        { 
            if(count  == k )
            {
                ans++;
                count = 0;
            }
            if(a[i] <= mid)
            {
                count++;
                
            }
            else
            {
                count = 0;
            }
            
            
            
        }
       
        
        if(count == k)
        {
            ans++;
        }
        
        return ans >= m;
        
        
        
    }
    
    
    int minDays(vector<int>& a, int m, int k) {
        int n  = a.size();
        int l  = 1;
        
        
        if(m*k > n)
            return -1;
        
    
        int h = *max_element(a.begin(),a.end());
        
        while(l <= h)
        {
            int mid = l+(h-l)/2;
            
            if(check(a,m,k,mid))
            {
                h = mid-1;
            }
            else
            {
                l = mid+1;
            }
            
            
            
        }
        
        return l;
        
        
    }
};