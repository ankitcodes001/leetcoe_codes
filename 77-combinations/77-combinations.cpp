class Solution {
public:
    
    vector<vector<int>>v;
    vector<int>temp;
    
    void fun(int n,int k, int i)
    {
        
        if(k == 0)
        {
            v.push_back(temp);
            return;
            
        }
        
        if(i>n)return;

        temp.push_back(i);
        fun(n,k-1,i+1);
        
     
        temp.pop_back();
        fun(n,k,i+1);
        
        
    }
    
    vector<vector<int>> combine(int n, int k) {
        
        fun(n,k,1);
        
        return v;
        
    }
};