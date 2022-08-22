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
    q.push({0,1});
    vector<int>dis(n+1,INT_MAX);
    unordered_map<int,int>mp(n+1);
    bool flag = false;
   while(q.size()>0)
   {   auto it = q.top();
       int currT = it.first;
       int node = it.second;
        q.pop();
     // signal logic;
    int signal = currT/change;
    if(signal%2!=0)
    {
        currT+= (change*(signal+1))-currT;
    }
   
    for(auto e:graph[node])
    {
        if(dis[e]!= currT+time && mp[e]<2)
        {
            if(e == n && flag == true)
            {
                return currT+time;
            }
        
        
        if(e == n)
            flag = true;
        
        dis[e] = currT+time;
        q.push({currT+time,e});
        mp[e]++;
        }
    }
   }
     return 0;
    }
};