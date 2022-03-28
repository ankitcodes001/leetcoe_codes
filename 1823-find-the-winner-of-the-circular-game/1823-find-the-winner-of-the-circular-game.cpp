class Solution {
public:
    int findTheWinner(int n, int k) {
    queue<int>q;
        for(int i = 1;i<=n;i++)
            q.push(i);
        
        while(q.size()!=1)
        {
            int x= k;
            while(x>1)
            {
                
                int a = q.front();
                q.push(a);
                q.pop();
                x--;
            }
            
            q.pop();
            
        }
        
        
        return q.front();
        
        
    }
};