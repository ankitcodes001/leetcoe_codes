class Solution {
public:
    vector<vector<int>>v;
    vector<int>temp;
    void fun(vector<int>&a,int i)
    {
        if(i == a.size())
        {
            v.push_back(temp);
            return;
        }
        
        temp.push_back(a[i]);
        fun(a,i+1);
        temp.pop_back();
        fun(a,i+1);
        
        
        
    }
    
    int subsetXORSum(vector<int>& nums) {
        
        
        fun(nums,0);
        int sum =0;
       
        
        for(auto x:v)
        {   int ans =0;
            for(auto i :x)
            {
                ans^=i;
            }
         sum+=ans;
        }
        
        
        
        
        
        return sum;
    }
};