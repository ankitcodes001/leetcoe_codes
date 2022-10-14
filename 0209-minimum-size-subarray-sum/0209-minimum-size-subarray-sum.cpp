class Solution {
public:
    int minSubArrayLen(int t, vector<int>& a) {
        
        // o(n)  first loop is running for every index but second loop is running only for condition hence
        // o(n)+o(n) = > o(n)
        // time complexity = o(n);
        
        int sum = 0;
        int i = 0;
        int j = 0;
        int n = a.size();
        int ans = INT_MAX;
        while(j<n)
        {
            sum+=a[j];
            
            while(sum >=t)
            {
                ans = min(j-i+1,ans);
                sum-=a[i];
                i++;
            }
            j++;
            
            
        }
        
        if(ans != INT_MAX) return ans;
        return 0;
        
        
    }
};