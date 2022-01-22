class Solution {
public:
    vector<vector<int>>ans;
    void fun(vector<int>&a,int i)
    {
        if(i==a.size())
        { ans.push_back(a);
            return;
        }
        for(int j =i;j<a.size();j++)
        {
            swap(a[i],a[j]);
            fun(a,i+1);
            swap(a[j],a[i]);
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        fun(nums,0);
        return ans;
    }
};