class Solution {
public:
    int threeSumClosest(vector<int>& a, int target) {
         int diff =  INT_MAX;
    int n = a.size();
    sort(a.begin(),a.end());
    int ans  = 0;
    for(int i  = 0; i<n;i++)
    {
        int j  = i+1;
        int k = n-1;
       
        while(j<k)
        {
            int sum = a[i]+a[j]+a[k];
            if(abs(target-sum) < diff)
            {
                ans = sum;
                diff = abs(target-sum);
            }
            
            if(sum == target) return sum;
            else if(sum > target)
                k--;
            else
                j++;
            
            
            
        }
        
    }
    
    
return ans;
    }
};