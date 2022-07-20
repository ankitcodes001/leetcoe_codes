class Solution {
public:
    bool canArrange(vector<int>& a, int k) {
        
        
        int n = a.size();
        if(n&1)
            return false;
        unordered_map<int,int>mp;
        for(int i =0;i<n;i++)
        {  int rem = (a[i]%k + k)%k;
            mp[rem]++;
        }
        for(int i =0;i<n;i++)
        {
             int rem = (a[i]%k + k)%k;
             if(2*rem == k)
             {
                 if(mp[rem]&1)
                     return false;
             }
             if(rem == 0)
             {
                 if(mp[rem]&1)
                     return false;
             }
             else if(mp[rem]!= mp[k-rem])
                 return false;
        }
        
        return true;
        
    }
};