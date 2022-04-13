class Solution {
public:
    
    bool fun(vector<int>&a,int start,vector<bool>&vis)
    {
        if(start>=a.size() || start<0 || vis[start])
            return false;
        
        if(a[start] == 0)
        {
            return true;
        }
        vis[start] = true;
         return fun(a,start+a[start],vis) || fun(a,start-a[start],vis);
        
        
        
        
        
    }
    bool canReach(vector<int>& arr, int start) {
        
        
        int n = arr.size();
        vector<bool>vis(n,false);
        
        return fun(arr,start,vis);
        
        
    }
};