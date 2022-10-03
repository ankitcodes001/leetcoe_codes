class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
    int temp = 0;
    for(int i  = 0;i<nums.size();i++)
     temp = temp^nums[i];
     int mask = 1;
     while(!(mask & temp))
     {
         mask = mask<<1;
     }
        int val=0;
     for(int i  = 0;i<nums.size();i++)
     {
         if(nums[i]&mask)
         {
             val^=nums[i];
         }
     }
       return { val, temp^val};
    }
};