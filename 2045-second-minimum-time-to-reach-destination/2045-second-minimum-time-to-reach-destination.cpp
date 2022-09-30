class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
     
     vector<vector<int>>graph(n+1);
        
     for(auto e:edges)
     {
         graph[e[0]].push_back(e[1]);
         graph[e[1]].push_back(e[0]);
     }
     
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
    vector<int>dis(n+1,INT_MAX);        
    q.push({0,1});
    unordered_map<int,int>mp(n+1);
    bool flag = false;
    while(q.size()>0)
    {
        auto it = q.top();
        int curr_time =  it.first;
        int node = it.second;
        q.pop();
        
        int val = curr_time/change;
        
        if(val%2!=0)
        {
            curr_time+=  (change*(val+1))-curr_time;
        }
   
        
        for(auto x : graph[node])
        {
            if(dis[x]!= curr_time+time && mp[x]<2)
            {
                if(x == n && flag == true)
                {
                    return curr_time+time;
                }
                
                if(x == n)
                flag = true;
                
                dis[x] = curr_time+time;
                
                q.push({curr_time+time,x});
                
                mp[x]++;
            }
            
        }
        
    }
return 0;
    }
};