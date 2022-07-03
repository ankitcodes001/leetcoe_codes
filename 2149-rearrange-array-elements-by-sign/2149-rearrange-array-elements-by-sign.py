class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        post,neg,ans = [],[],[]
        for ele in nums:
            if ele < 0:
                neg.append(ele)
            else :
                post.append(ele)
            
        for a in range(len(post)):
            ans.append(post[a])
            ans.append(neg[a])
            
        return ans    