class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long n = nums.size();
         long long prefix[n];
        long long sum = 0;
        prefix[0]  = nums[0];
        sum+=nums[0];
        
        for(int i = 1;i<n;i++)
        {  sum+=nums[i];
            prefix[i] = prefix[i-1]+nums[i];
        }
        
        //cout<<sum<<endl;
        
        long long diff = INT_MAX;
         long long  index;
        for(int i  = 0;i<n;i++)
        {
            long long left = (prefix[i]) / (i+1);
             long long right;
            if(i == n-1)
                right = 0;
            else
             right = (sum-prefix[i]) / (n-i-1);
            
            long long temp = abs(left-right);
            if(temp < diff )
            {  
                diff = temp;
                index = i;
               // mp[i] = temp;
            }
          //  v.push_back({})
            
        }
        
        
        
    
        return index;
        
        
        
    }
};