class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    
    if(image[sr][sc] == color)
        return image;
    queue<vector<int>>q;
    q.push({sr,sc});
    int n = image.size();
    int m = image[0].size();
    vector<vector<int>>dir =  {{-1,0},{0,1},{1,0},{0,-1}};
    int prev_color = image[sr][sc];
    //image[sr][sc]=color;
    while(q.size()>0)
    {
      auto t = q.front();
      q.pop();
      int x = t[0];
      int y = t[1];
      image[x][y] = color;
      for(auto d:dir)
      {
          int nx = x+d[0];
          int ny = y+d[1];
          
          if(nx<n && nx>=0 && ny<m && ny>=0 && image[nx][ny] == prev_color)
          {
              q.push({nx,ny});
          }
          
         
      }
        
    }
    
    return image;
        
    }
};