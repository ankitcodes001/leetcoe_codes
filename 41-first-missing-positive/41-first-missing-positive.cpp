class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        
//         for(auto x : a)
//             cout<<x<<" ";
//         for(int i  = 0;i<a.size();i++)
//         {
//             if(i!=a[i])
//                 return i;
//         }
//         return a[a.size()-1]+1;
     int i  = 0;
     int n = nums.size();
    while(i<nums.size())
    {
        if(nums[i]>=1 && nums[i]<=n && nums[i]!=  i+1 && nums[nums[i]-1]!= nums[i])
        {
            swap(nums[i],nums[nums[i]-1]);
        }
        else
        {
            i++;
        }
    }
    for(int j  = 0;j<nums.size();j++)
         if(j+1!= nums[j])
                return j+1;
        return n+1;

    }
};