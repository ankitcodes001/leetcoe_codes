class Solution {
public:
     bool static comp(vector<int>&a,vector<int>&b)
     {
         return a[1] >= b[1];
     }
    int maximumUnits(vector<vector<int>>& a, int k) {
        
        sort(a.begin(),a.end(),comp);
        int ans = 0;
        for(int i = 0;i<a.size();i++)
        {   if(k == 0)
            {
              break; 
            }
            if(a[i][0] <= k)
            {  ans+=(a[i][1]*a[i][0]);
               k-=a[i][0];
            }
            else if(a[i][0] > k)
            {  
                ans+=(a[i][1]*k);
                k = 0;
            }
        
            
        }
        
        return ans;
        
    }
};