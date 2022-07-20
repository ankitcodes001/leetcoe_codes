class Solution {
public:
    int minOperations(vector<int>& a, vector<int>& b) {
        
        int ans = b[0];
        for(int i = 1;i<b.size();i++)
        {
            ans = __gcd(ans,b[i]);
            
        }
        
        cout<<ans<<endl;
        sort(a.begin(),a.end());
        for(auto x :a)
            cout<<x<<" ";
        int res = 0;
        for(int i =0;i<a.size();i++)
        {
            if(ans%a[i] == 0)
            {
                return i;
            }
        }
        
        
            return -1;
        
    }
};