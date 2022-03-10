class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        
        
        
        int n = nums.size()-1;
        int m = nums.size()-1;
        int carry =0;
        
      
        vector<int>ans;
        
      
        
        int i = nums.size()-1;
        while(i>=0 || carry ==1 || k!=0)
        {
            int sum=0;
            if(k!=0)
            {
                int rem = k%10;
                k = k/10;
                
                sum+=rem;
             }
            if(i>=0)
            {
                sum+=nums[i];
                i--;
            }
            
        sum+= carry;
        carry = sum/10;
        ans.push_back(sum%10) ; 
            

        }
       
        
        
        
        
        
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};