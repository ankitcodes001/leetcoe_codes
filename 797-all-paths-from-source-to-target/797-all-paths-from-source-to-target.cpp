class Solution {
public:
   vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
     queue<vector<int>>q;
     q.push({0});
     vector<vector<int>>ans;  
     while(q.size() > 0)
     {
         auto it = q.front();
         q.pop();
         
         for(auto x : graph[it.back()])
         {   
             it.push_back(x);
          
             if(x == graph.size()-1)
             {
                 ans.push_back(it);
             }
              else
              {
                  q.push(it);
                  
              }
              it.pop_back();
         }
     }
  
       return ans;
    }
};