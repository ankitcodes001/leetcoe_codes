class Solution {
public:
    
   
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>>s;
        int n =  nums.size();
        for(int i = 0;i<nums.size();i++)
        {
            long long sum1  = target- nums[i];
            for(int j = i+1;j<nums.size();j++)
            { 
                int start = j+1;
                int end = n-1;
                long long sum = sum1 - nums[j];
               // cout<<sum<<" "<<"Sum";
                while(start < end)
                {
                    long long new_sum =  nums[start] + nums[end];
                  //  cout<<new_sum<<"-"<<sum<<" ";
                    if(new_sum == sum )
                    {
                        s.insert({nums[i],nums[j],nums[start], nums[end]});
                        start++;
                        end--;
                    }
                    else if(new_sum > sum)
                    {
                        end--;
                    }
                    else
                    {
                        start++;
                    }
                    
                    
                    
                    
                }
                
            }
            
        }
        
        
        for(auto x:s)
        {
            ans.push_back(x);
        }
        return ans;
        
        
        
        
        
    }
};