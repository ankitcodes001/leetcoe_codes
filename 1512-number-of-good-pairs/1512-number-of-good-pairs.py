class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        size = len(nums);
        ans = 0;
        for i in range(size):
            for j in range(size):
                if(nums[i] == nums[j] and i < j ):
                    ans = ans+1
        return ans