class Solution {
public:
    bool static comp(vector<int>&a,vector<int>&b)
    {
        if(a[1] == b[1]) return a[0] < b[0];
        
        return a[1]<b[1];
    }
    int findLongestChain(vector<vector<int>>& v) {
    int temp = 1;
    sort(v.begin(),v.end(),comp);
    int prev = v[0][1];
    
    for(int i = 0;i<v.size();i++)
    {
        if(prev < v[i][0])
        {
            temp++;
            prev = v[i][1];
        }
        
        
    }
        
    return temp;  
        
    }
};