class Solution {
public:
   
    int twoCitySchedCost(vector<vector<int>>& nums) {
    sort(nums.begin(),nums.end(),[](vector<int>&a,vector<int>&b){
        
        return a[0]-b[0]<a[1]-b[1];
    });
        
        
        //sort diff of cost of travelling from city a to city b
        
        
        int ans  = 0;
        int n = nums.size();
        for(int i =0;i<n/2;i++)
        {
            ans+= nums[i][0]+nums[n-i-1][1];
            
            
        }
    return ans;
        
        
        
    }
};