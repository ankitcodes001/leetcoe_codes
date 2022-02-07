class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        
        vector<int>odd,even;
        for(int i =0;i<nums.size();i++)
        {
            if(i%2 == 0)
            {
                even.push_back(nums[i]);
                
            }
            else
            {
                odd.push_back(nums[i]);
                
            }
        }
        
        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(), even.end());
        
        //odd//decreasing
        //even// increasing
        
        
      
        int i =0,e=0,o=0;
        while(i<nums.size())
        {
            if(i%2 == 0)
            {
                nums[i++] = even[e++];
                
            }
            else
            {
                nums[i++] = odd[o++];
                
            }
            
            
            
        }
        
        return nums;
        
        
        
        
    }
};