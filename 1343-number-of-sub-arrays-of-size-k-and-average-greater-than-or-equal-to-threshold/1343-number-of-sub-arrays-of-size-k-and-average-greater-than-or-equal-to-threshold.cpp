class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int t) {
        
         int i =0,j=0,n=nums.size();
         int  ans =0,sum=0;
        while(j<n)
        {   sum+=nums[j];
            if((j-i+1) < k)
                j++;
            else if((j-i+1)==k){
               auto avg = sum/k;
                if(avg >=t)
                {
                    ans++;
                }
               
                sum-=nums[i];
                i++;
                j++;
            }
            
        }
        
       
        return ans;
        
        
        
    }
};