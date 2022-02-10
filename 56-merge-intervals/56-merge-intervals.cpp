class Solution {
public:
    
   
    
    vector<vector<int>> merge(vector<vector<int>>& v) {
     sort(v.begin(),v.end());    
        
/// 1.  ------
         // -------
        
       int n = v.size();
       int start = v[0][0];
       int end  = v[0][1];
        
      vector<vector<int>>a;
        
        
        for(int i  = 1;i<n;i++)
        {    
            if(end>=v[i][0])
            {
                end  = max(v[i][1],end);
              
                
            }        
            else
            {
               a.push_back({start,end});
                start  = v[i][0];
                end = v[i][1];
               
                
            }
            
        }
        
        a.push_back({start,end});
        
        
        
        
        
        
        
        
        return a;
        
        
        
        
    }
};


