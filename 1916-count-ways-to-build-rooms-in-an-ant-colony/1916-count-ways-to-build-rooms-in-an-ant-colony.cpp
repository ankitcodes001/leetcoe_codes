 #define ll long long 
class Solution {
public:
    ll mod = 1e9+7;
    vector<ll>ans,sz,fact;
    vector<int>adj[100005];
    
    ll power(ll a,ll b)
    {
        if(b == 0)
            return 1;
        ll temp = power(a,b/2);
        ll even = (temp*temp)%mod;
        if(b%2 == 0)
            return even;
        else
            return (even*a)%mod;
    }
    
    ll modInv(ll x)
    {
        return power(x,mod-2);
        
    }
    
    void precompute(ll n)
    {
        ll prod = 1;
        fact[0] = 1;
        fact[1] = 1;
        for(int i = 2;i<=n;i++)
        {
            prod = (i*prod)%mod;
            fact[i] = prod;
        }
    }
    
    
    void dfs(ll src)
    {
        ans[src] = 1;
        sz[src] = 1;
        for(auto e:adj[src])
        {   dfs(e);
            sz[src] = (sz[src] + sz[e])%mod;
            ans[src] = (ans[src]*ans[e])%mod;
            ans[src] = (ans[src]*modInv(fact[sz[e]]))%mod;
        }
        ans[src] = (ans[src]*fact[sz[src]-1])%mod;
    }
    int waysToBuildRooms(vector<int>& p) {
        
    for(int i = 1;i<p.size();i++)
    {
        adj[p[i]].push_back(i);
    }
        
    ans.resize(p.size());
    sz.resize(p.size());
    fact.resize(p.size()+1);
    precompute(p.size());
    dfs(0);
        
    return ans[0];
    }
};

