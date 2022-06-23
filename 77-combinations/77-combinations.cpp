class Solution {
public:
    vector<vector<int>>ans;
    vector<int>curr;
    void fun(int n,int start,int k)
    { if(curr.size() == k)
    {
       ans.push_back(curr);
      return ;  
    }
        for(int i = start;i<=n;i++)
        {
            curr.push_back(i);
            fun(n,i+1,k);
            curr.pop_back();
        }
            
        
    
    }
    vector<vector<int>> combine(int n, int k) {
    
     
     fun(n,1,k);
     return ans;
        
        
    }
};