class Solution {
public:
    
    int fun(int n ,int k)
    {
        if(n==0)
            return 1;
        
        return (fun(n-1,k)+k)%n;
        
        
        
        
    }
    
    int findTheWinner(int n, int k) {
        /*
        
         If you observe, you can see that we are doing the same activity again and again i.e. deleting every kth element we encounter. Therefore, we can think towards the recursive approach also.
Intution : If I have the winner for 'n-1' and 'k'. I can find the winner for 'n' and 'k' by moving on to the next kth person (i.e. f(n) = f(n-1)+k). Keeping in mind that they are sitting on a round table we have to rotate also (i.e. f(n) = (f(n-1)+k)%n).
        
        */
        
        int ans = fun(n,k)+1;
        return ans;
    
    }
};