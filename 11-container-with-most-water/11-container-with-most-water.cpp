class Solution {
public:
    int maxArea(vector<int>& h) {
        // 2 pointer approach
        
      int l =0;
        int r = h.size()-1;
        int max_area =0;
        while(l<r)
        {
            
         int left = h[l];
         int right  = h[r];
         max_area = max(max_area, min(left,right)*(r-l));
            
          if(left<right)l++;
            else r--;
          
               
        }
        return max_area;
    }
};