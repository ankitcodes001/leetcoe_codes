class Solution {
public:
    int cnt = 0;
    void solve(vector<int>&v,int i)
    {
        if(i == v.size())
        {
            cnt++;
            return;
        }
        for(int j = i;j<v.size();j++)
        {
            if(v[j]% (i+1) == 0  || (i+1 )% v[j] == 0)
            {
                swap(v[i],v[j]);
                solve(v,i+1);
                swap(v[i],v[j]);
            }
        }
        
        
    }
    int countArrangement(int n) {
        
        vector<int>v;
        for(int i = 1;i<=n;i++)
            v.push_back(i);
        
         solve(v,0);
        
        return cnt;
        
        
        
    }
};