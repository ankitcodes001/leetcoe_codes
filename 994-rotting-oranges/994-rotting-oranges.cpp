class Solution {
public:
    int orangesRotting(vector<vector<int>>& mat) {
        
     int fresh = 0;
     int n = mat.size();
     int m = mat[0].size();
        
     queue<pair<int,int>>q;
        
     for(int i = 0;i<n;i++)
     {
         for(int j = 0;j<m;j++)
         {
             if(mat[i][j] == 2)
             {q.push({i,j});
                 
             }
             if(mat[i][j] == 1)
             {
                 fresh++;
             }
         }
     }
        int ans = -1;
        vector<vector<int>>d = {{1,0},{0,1},{0,-1},{-1,0}};
     
while(q.size()>0)
{
    
    int len = q.size();
    while(len-- )
    {
        
    auto x = q.front();
    int i = x.first;
    int j  = x.second;
    q.pop();
    
    for(auto t : d)
    {
        int nx = t[0]+i;
        int ny = t[1]+j;
        
        if(nx>=0 && nx<n && ny>=0 && ny<m && mat[nx][ny] == 1)
        {
           
            mat[nx][ny] = 2;
             fresh--;
            q.push({nx,ny});
            
        }
            
    }
        
        
    }
    ans++;
    
    
}
        
        
if(fresh > 0) return -1;
if(ans == -1) return 0;
        return ans;
        
    }
};