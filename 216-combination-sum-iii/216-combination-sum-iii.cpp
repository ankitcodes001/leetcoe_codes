class Solution {
public:
    vector<vector<int>>ans;
    vector<int>curr;
    void subset(int start,int end ,int k ,int target)
    {
        if(target == 0 &&  curr.size() == k)
        {
            
            ans.push_back(curr);
            return;
        }
        
        
        for(int i = start;i<=end;i++)
        {
            curr.push_back(i);
            subset(i+1,end,k,target-i);
            curr.pop_back();
        }
        
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        subset(1,9,k,n);
        return ans;
        
        
    }
};