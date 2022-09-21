class Solution {
public:
    int trap(vector<int>& h) {
        
        //leftmax[i]
        //rightmax[i]
        //ans+= min(l[i],r[i])-h[i] 
       int n = h.size();
       int left_max[n];
       left_max[0] = h[0];
       int right_max[n];
       right_max[n-1] = h[n-1];
       for(int i  =1;i<n;i++)
       {
           left_max[i] = max(h[i],left_max[i-1]);
       }
       for(int i  = n-2;i>=0;i--)
       {
           right_max[i] = max(h[i],right_max[i+1]);
       }
       int ans  = 0;
       for(int i  = 0;i<n;i++)
       {
           ans+= (min(left_max[i],right_max[i]) - h[i]);
       }
       return ans; 
    }
};