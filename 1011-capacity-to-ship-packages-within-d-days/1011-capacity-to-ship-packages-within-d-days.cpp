class Solution {
public:
     bool is_check(vector<int>a,int mid,int k,int n)
    {
       int s = 1;
       int p = 0;
       for(int i = 0;i<n;i++)
       {
           if((p+a[i])<=mid)
           p+=a[i];
           else
           {
               s++;
               p = a[i];
           }
       }
       return s<=k;
    }
    int find(vector<int>a, int n, int k) 
    {   
        if(k>n)
        return -1;
        
        int sum = 0,res= 0,s=INT_MIN,e=0;
        for(int i = 0;i<n;i++)
        
        {
            sum+=a[i];
            s = max(a[i],s);
        }
        e = sum;
        while(s<=e)
        {
            int mid = s+(e-s)/2;
            if(is_check(a,mid,k,n))
            {
                res = mid;
                e = mid-1;
            }
            else
            s = mid+1;
            
        }
        
        return res;
        
    
    }
    int shipWithinDays(vector<int>& weights, int days) {
    int n = weights.size();
    int k = days;
    return find(weights,n,k);
    }
};