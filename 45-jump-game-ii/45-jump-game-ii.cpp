class Solution {
public:
    /*
    long long fun(vector<int>&nums,int curr,vector<long long>&dp,int des)
    {
        if(curr == des)
            return 0;
        
        if(dp[curr]!=-1)
            return dp[curr];
        
       long long  temp  = INT_MAX;
        for(int i = 1;i<=nums[curr];i++)
        {
            if(curr+i>des)
                break;
            
            temp = min(temp,1+fun(nums,curr+i,dp,des));
             
        }
        
        dp[curr] = temp;
        
        return temp;
        
        
        
        
        
    }
    
    */
    
    int jump(vector<int>& nums) {
        //greedy ---> o(n)
        // space  =  o(1)
        
        int  n = nums.size();
        int des = n-1;
        
     int max_reach  =0 ;
     int curr = 0;
     int step =0 ;
     for(int i = 0;i<n-1;i++)
     {
         max_reach = max(nums[i]+i,max_reach);
         
         if(i == curr)
         {
             step++;
             curr = max_reach;
         }
         
         
         
     }
        return step;
    }
};