class Solution:
    def candy(self, a: List[int]) -> int:
           
     # distribute 1 candies to all 
     # add +1 candy to each child having greater rating than from next elemt
     # do simmilar from right side add max(candi[i],cand[i+1]+1);
     # sum of all candies
        n = len(a)
        ans = [1]*n
        
        for i in range(1,len(a)):
            if a[i] > a[i-1] : #right side
                ans[i] = ans[i-1]+1
        for i in range(n-2,-1,-1):
            if a[i] > a[i+1]:
                ans[i] = max(ans[i],ans[i+1]+1)
            
        
        
        return sum(ans)