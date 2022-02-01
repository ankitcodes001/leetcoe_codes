class Solution {
public:
    vector<int> getStrongest(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int n  = nums.size();
        int m = (n-1)/2;
        int med = nums[m];
        int l =0;
        int r = n-1;
        vector<int>v(k);
        int c =0;
        while(c<k)
        {
            if(abs(nums[r]-med) >= abs(nums[l]-med))
            {
                v[c] = nums[r];
                r--;
                
            }   
            else
            {
                v[c] = nums[l];
                 l++;
                
                
            }
            
            c++;
         
        }
        
        
        
        
        
        return v;
    }
};