class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int>ans;
        
        for(int i  = 0;i<=n;i++)
        {
            
            long mask  = 0;
            int num = i;
            int c =0;
            for(int j =0;j<32;j++)
            {
                if(i&(1<<j))
                    c++;
                
                
            }
            ans.push_back(c);
            
            
        }
        
        return ans;
        
        
    }
};