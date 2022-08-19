class Solution {
public:
    
    int sum  = 0;
    void solve(int i,vector<int>&nums,vector<int>&ans)
    {
        if(i == nums.size())
        {
            ans.push_back(sum);
            return;
        }
        
        sum+= nums[i];
        solve(i+1,nums,ans);
        sum-=nums[i];
        solve(i+1,nums,ans);
    }
    
    int minAbsDifference(vector<int>& nums, int goal) {
  
    int n = nums.size();
    vector<int>a;
    vector<int>b;
    for(int i = 0;i<n;i++)
    {
        if(i<n/2)
        {
            a.push_back(nums[i]);
        }
        else
            b.push_back(nums[i]);
    }
        
        
    vector<int>x,y;    
    solve(0,a,x);
    solve(0,b,y);
    
    sort(y.begin(),y.end());
    int ans  = abs(goal);
    for(auto t : x)
    {
        int val = goal-t;
        int index = lower_bound(y.begin(),y.end(),val)-y.begin();
        if(index>=0 && index <y.size())
        {
            ans = min(ans,abs(goal- (t+y[index])));
        }
        index--;
        if(index >=0)
        {
            ans = min(ans,abs(goal-(t+y[index])));
        }
        
        
    }
        
    return ans;
        
    }
};