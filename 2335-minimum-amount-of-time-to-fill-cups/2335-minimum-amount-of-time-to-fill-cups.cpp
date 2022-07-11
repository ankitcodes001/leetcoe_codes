class Solution {
public:
    int fillCups(vector<int>& a) {
        
        // choose two maximum amount of cups and fill them first 
        //and add it to answer
        // and at last choose single amount water and fill with cup
        int res = 0;
        for(;max({a[0],a[1],a[2]})>0;res++)
        {
            sort(a.begin(),a.end());
            a[1]--;
            a[2]--;
        }
        
        
        return res;
        
    }
};