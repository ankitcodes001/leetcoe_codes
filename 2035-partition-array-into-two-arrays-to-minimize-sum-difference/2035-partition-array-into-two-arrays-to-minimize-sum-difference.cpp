class Solution {
public:
    vector<vector<int>>subset_sum;
    
    void solve(vector<int>&a, int i ,int count,int sum)
    {
        if(i ==  a.size())
        {
            subset_sum[count].push_back(sum);
            return;
        }
        
        solve(a,i+1,count+1,sum+a[i]);
        solve(a,i+1,count,sum);
        
    }
    
    int minimumDifference(vector<int>& nums) {
        int n = nums.size();
        int m = n/2;
        int total =  0;
        for(auto t : nums) total+=t;
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
        
    
        subset_sum.resize(m+1);
        solve(a,0,0,0);
        
        vector<vector<int>> x (subset_sum.begin(),subset_sum.end());
        
        subset_sum.clear();
        subset_sum.resize(m+1);
        
        solve(b, 0, 0, 0);
      vector<vector<int>> y(subset_sum.begin(),subset_sum.end());
        
        subset_sum.clear();
        
       for(int i  = 0;i<x.size();i++)
       {
           sort(x[i].begin(),x[i].end());
               
       }
       for(int i = 0;i<y.size();i++)
       {
           sort(y[i].begin(),y[i].end());
       }
     int ans  = INT_MAX;
     for(int i = 0;i<x.size();i++)
     {
         vector<int>left = x[i];
         int r = m-i;
         vector<int>right = y[r];
         int half_sum = total/2;
         
         for(auto e:left)
         {
             int req = half_sum-e;
             
             auto index = lower_bound(right.begin(),right.end(),req);
             
             if(index == right.end())
                 index--;
             int p1 = e+(*index);
             int p2 = total - p1;
             
             ans = min(ans,abs(p1-p2));
             
             
         }
         
     }
        
        
      return ans;  
        

    }
};