class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b)
    {
        if(a[0] == b[0])
            return a[1]>b[1];
        return a[0]<b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& v) {
      
        
        sort(v.begin(),v.end(),comp);
        int ans = INT_MIN;
        int c =0;
        int n = v.size();
        for(int i = n-1;i>=0;i--)
        {
            if(v[i][1]<ans)
                c++;
            ans = max(ans,v[i][1]);

        }
        return c;
        
    }
};