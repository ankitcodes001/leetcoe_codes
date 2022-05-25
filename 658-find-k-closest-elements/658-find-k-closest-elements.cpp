class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x) {

        
        vector<pair<int,int>>v;
        for(int i = 0; i<a.size();i++)
        {
            v.push_back({abs(a[i]-x),a[i]});
        }
        
        int count = 0;
        
        sort(v.begin(),v.end());
        
        vector<int>ans;
      
        for(auto z : v)
        {
            count++;
            ans.push_back(z.second);
            if(count == k)
                break;
        }
        
        

        sort(ans.begin(),ans.end());
        
        
        
        return ans;
        
        
        
    }
};