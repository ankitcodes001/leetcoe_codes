class Solution {
public:
    
    vector<vector<int>> ans ;
    vector<int> temp;
    
    
    
    void func(vector<int> & num, int i , int n)
    {
        if(i == n)
        {
            ans.push_back(temp);
            return;
        }
        
        
        temp.push_back(num[i]);
        
        func(num,i+1, n);
        
        temp.pop_back();
        
        func(num, i+1, n);
            
        
    
    }
    
    
    
    
    
    
    
   vector<vector<int>> subsets(vector<int>& num) {
        
       
       int n  = num.size();
       int i = 0;
       
             
       func(num, i, n);
       return ans;      
    }
};