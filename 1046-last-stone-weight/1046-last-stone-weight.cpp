class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
    priority_queue<int>q;
    for(int i = 0;i<nums.size();i++)
    {
        q.push(nums[i]);
    }
    while(q.size()>1)
    {
        int x = q.top();
        q.pop();
        int y = q.top();
        q.pop();
        if(x!=y)
            q.push(x-y);
    }
    
   if(q.size() == 0)
       return 0;
    return q.top();
        
    }
};