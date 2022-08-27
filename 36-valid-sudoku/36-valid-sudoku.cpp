class Solution {
public:
    
   
    bool isValidSudoku(vector<vector<char>>& a) {
        
        
        for(int i = 0;i<9;i++)
        {  
            set<char>s;
            for(int j  = 0;j<9;j++)
            {
            if(a[i][j]!= '.')
            {
              if(s.find(a[i][j])!= s.end())
                 return false;
              s.insert(a[i][j]);
            }
        }
        }    
            
            
        
        for(int i = 0;i<9;i++)  
        {   set<char>s;
            for(int j  = 0;j<9;j++)
            {
                
            if(a[j][i]!= '.')
             {
               if(s.find(a[j][i])!= s.end())
                  return false;
               s.insert(a[j][i]);
             }
            }
        }  
            
            
     for(int i  = 0;i<9;i+=3)
     {
         for(int j  = 0;j<9;j+=3)
         {
             set<char>s;
             for(int k =i ;k<3+i;k++)
             {
                 for(int l = j;l<3+j;l++)
                 {
                     
                     if(a[k][l]!= '.')
                     {
                         if(s.find(a[k][l])!= s.end())
                             return false;
                         s.insert(a[k][l]);
                     }
                     
                 }
             }
             
         }
     }
     
    return true;        
            
    
        
        
    }
};