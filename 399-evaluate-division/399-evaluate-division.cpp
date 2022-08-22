class Solution {
public:
    unordered_map<string,vector<pair<string,double>>>mp;
    
    double bfs(string a, string b)
    {
        set<string>vis;
        queue<pair<string,double>>q;
        q.push({a,1});
        vis.insert(a);
            
        while(q.size()>0)
        {
            auto it = q.front();
            string curr = it.first;
            double curr_val = it.second;
            
            
            if(curr == b)
                return curr_val;
            q.pop();
            
            for(auto x : mp[curr])
            {
               
                if(vis.find(x.first) == vis.end())
                {
                    q.push({x.first,curr_val*x.second});
                    vis.insert(x.first);
                }
            }
        }
        
        
        
    return -1;
        
    }
    
    vector<double> calcEquation(vector<vector<string>>& e, vector<double>& v, vector<vector<string>>& qs) {
    for(int i  = 0;i<e.size();i++)
    {
        string a = e[i][0];
        string  b = e[i][1];
        double x = v[i];
        mp[a].push_back({b,x});
        mp[b].push_back({a,1/x});
    }
        
    vector<double>res;
    for(auto x : qs)
    {
        string a = x[0];
        string b = x[1];
        if(mp.find(a) == mp.end() || mp.find(b) == mp.end())
        {
            res.push_back(-1);
            continue;
        }
        
        res.push_back({bfs(a,b)});
    }
return res;
           
    }
};