class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
    vector<pair<long long,long long>>graph[n];
    for(auto i:roads)
    {graph[i[0]].push_back({i[1],i[2]});
     graph[i[1]].push_back({i[0],i[2]});
    }
    priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,long long>>>pq;
    vector<long long>dis(n,LONG_MAX);
    vector<long long>way(n);    
    long long mod = 1e9+7;    
    pq.push({0,0});    
    dis[0] = 0;
    way[0] = 1;
    while(pq.size() > 0 )
    {
        auto it = pq.top();
        
        pq.pop();
        
        long long node = it.second;
        long long time = it.first;
        
        if(time > dis[node])
            continue;
        
        for(auto x : graph[node])
        {
            long long  new_time = x.second;
            long  long new_node = x.first;
        
            
            if(new_time + dis[node] < dis[new_node])
            {
                dis[new_node] = dis[node]+new_time;
                
                way[new_node] = way[node];
                
                pq.push({dis[new_node],new_node});
                
            }
            
            
            else if(new_time+dis[node] == dis[new_node])
            {
                way[new_node] = (way[new_node]+way[node])%mod;
            }

        }
    }
        
        
     return way[n-1]%mod;        
        
    }
};