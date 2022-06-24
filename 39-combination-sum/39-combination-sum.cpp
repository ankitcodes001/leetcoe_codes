class Solution {
public:
    
    
    // space  = O(2^n)+O(n)
    // time  = O(2^n)
    vector<vector<int>>ans;
    vector<int>temp;
    
    void fun(vector<int>&nums,int t,int start)
    { 
       if(t == 0)
       {
           ans.push_back(temp);
           return;
       }
       if(t<0)
           return;
        
      for(int i = start;i<nums.size();i++)
      {
          
          temp.push_back(nums[i]);
          fun(nums,t-nums[i],i);
          temp.pop_back();
      }
        
    
    }
    vector<vector<int>> combinationSum(vector<int>& a, int t) {
     
        fun(a,t,0);
        return ans;
    }
};