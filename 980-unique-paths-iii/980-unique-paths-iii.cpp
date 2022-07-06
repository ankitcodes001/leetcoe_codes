class Solution {
public:
 
        
    int count_path(vector<vector<int>>&a,int x,int y,int count,vector<vector<bool>>&vis)
    {  
        if(x<0 || y<0 || x >= a.size() || y>= a[0].size() || a[x][y] == -1 || vis[x][y] == 1)
            return 0;
        
        if(a[x][y] == 2)
        {
            if(count == -1)
                return 1;
            return 0;
        }
        
        vis[x][y] =1 ;
        
        int sum = 0;
        
        
        sum+=count_path(a,x,y+1,count-1,vis);
        sum+=count_path(a,x,y-1,count-1,vis);
        sum+=count_path(a,x+1,y,count-1,vis);
        sum+=count_path(a,x-1,y,count-1,vis);
        
        vis[x][y] = 0;
        return sum;
        
    
        
    
    }
    
    int uniquePathsIII(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        int sx = -1,sy = -1;
        int count = 0;
      
         for(int i = 0;i<n;i++)
         {
            for(int j = 0;j<m;j++)
            {
                if(a[i][j] == 1)
                { 
                    sx = i;
                    sy = j;
                }
                else if(a[i][j] == 0)
                {
                    count++;
                }
            }
        }
        
        vector<vector<bool>>vis(n,vector<bool>(m,0));
        
               
        return count_path(a,sx,sy,count,vis);
        
        
        
        
    }
};