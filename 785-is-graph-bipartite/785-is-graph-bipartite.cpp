class Solution {
public:
    bool  bipart = true;
    void DFS(int node,vector<bool>&vis,vector<vector<int>>&graph,bool req_color,vector<int>&color)
    {
//         if(vis[node])
//         {
//             if(color[node]!=req_color)
//             {
//                 bipart = false;
//                 return;
//             }
//         }
      
        // if(color[node]!= req_color)
        // {
        //     bipart=false;
        //         return;
        // }
          
        vis[node] = true;
        color[node]= req_color;
        for(auto i : graph[node])
        {
            if(vis[i] == false)
            {
                DFS(i,vis,graph,req_color xor 1,color);
            }
            if(color[i] == req_color)
            {
                bipart = false;
                    return;
            }
            
        }
        
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();
        vector<bool>vis(n,false);
        vector<int>col(n,-1);
        for(int i  = 0;i<n;i++)
        {
            if(vis[i] == 0)
            {
                DFS(i,vis,graph,0,col);
            }
        }
        
        
        
        return bipart;
    }
};