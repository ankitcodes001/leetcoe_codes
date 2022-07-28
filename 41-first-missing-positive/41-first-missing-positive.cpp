class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
//         
//         int n = *max_element(nums.begin(),nums.end());
//         for(int i  = 1;i<=n;i++)
//         {
//             if(s.find(i)== s.end())
//                 return i;
//         }
        
//         return n<0?1:n+1;
     
          
           set<int>s(nums.begin(),nums.end());
           vector<int>a;
           a.push_back(0);
           for(auto x :s)
               if(x>0)
                   a.push_back(x);
        for(auto x : a)
            cout<<x<<" ";
        for(int i  = 0;i<a.size();i++)
        {
            if(i!=a[i])
                return i;
        }
        return a[a.size()-1]+1;
    
        
        
    
        
        
        
    }
};