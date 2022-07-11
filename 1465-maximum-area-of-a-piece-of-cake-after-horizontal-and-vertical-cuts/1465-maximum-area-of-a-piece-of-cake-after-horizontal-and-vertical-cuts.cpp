class Solution {
public:
    int maxArea(int h1, int w, vector<int>& h, vector<int>& v) {
        
        long long h_max = INT_MIN;
        long long v_max = INT_MIN;
        int  mod = 1e9+7;
       
       
          h.push_back(0);
          h.push_back(h1);
       
        v.push_back(0);
           v.push_back(w);
       
        sort(h.begin(),h.end());
        sort(v.begin(),v.end());
        
        for(int i = 1;i<h.size();i++)
        {
            long long curr = h[i]-h[i-1];
            h_max = max(curr,h_max);
        }
        
        for(int i = 1;i<v.size();i++)
        {
            long long curr = v[i]-v[i-1];
            v_max = max(curr,v_max);     
        }
        h_max = h_max%mod;
        v_max = v_max%mod;
    
        
        return (h_max*v_max)%mod;
        
        
        
    }
};