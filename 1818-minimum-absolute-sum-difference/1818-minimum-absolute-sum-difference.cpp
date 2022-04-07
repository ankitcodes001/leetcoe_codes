class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& a, vector<int>& b) {
        
        // approach
        // find normal absoulute diff of two arrays
         // think of minize the each difference of a[i]-b[i]
         // so basically to minimize this difference we need to get the closet value of b[i] in a array
         // to get those value we can sort the a array and use lower_bound() for b[i]
          // store the minium absoulute difference of each elemement in a vector call diffarray
           // lastly get the maximum out of all absoulute diffarray  substrate that value from original normal absoulte diff and return

        
        
        
        int n = a.size();
        vector<int>diff(n);
        int sum = 0;
        int mod  = 1e9+7;
        for(int i  =0 ;i<a.size();i++)
        {
            diff[i] = abs(a[i]-b[i]);
            sum = (sum+diff[i])%mod;
        }
        
        vector<int>v(n);
        
        sort(a.begin(),a.end());
        
        for(int i=0;i<b.size();i++)
        {
           int  j = lower_bound(a.begin(),a.end(),b[i])-a.begin();
            
            if(j!=0 && j!=n)
            {
                
                v[i] = min(abs(b[i]-a[j]), abs(b[i]-a[j-1]));
                
            }
            else if(j == 0)
            {
                v[i] = abs(b[i]-a[j]);
            
            }
            else if(j == n)
            {
                v[i] = abs(b[i] - a[j-1]);
            }
        }
        
        int maxi = 0;
        for(int i =0;i<n;i++)
        {
            maxi = max(maxi, diff[i]-v[i]);
        }
        
        
        return (sum+mod - maxi)%mod;
        
        
        
        
        
    }
};