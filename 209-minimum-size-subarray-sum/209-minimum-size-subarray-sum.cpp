class Solution {
public:
    int minSubArrayLen(int t, vector<int>& a) {
        
        // o(n)  first loop is running for every index but second loop is running only for condition hence
        // o(n)+o(n) = > o(n)
        // time complexity = o(n);
        
        
        int n = a.size();
        int i  = 0;
        int j  = 0;
        int sum = 0;
        
        int res = INT_MAX;    
            
        while(j<n)
        {
            sum+=a[j];
            
            while(sum >= t)
            {
                
                sum-= a[i];
                
                res = min(res,j-i+1);
                
                i++;
                
            }
            
            j++;
            
        }
        
        return res == INT_MAX ? 0 : res;
    }
};