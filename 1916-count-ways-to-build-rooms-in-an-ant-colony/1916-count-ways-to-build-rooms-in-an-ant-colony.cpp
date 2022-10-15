class Solution {
public:
    static const int mod=1e9+7;
    vector<int>adj[100005];
    vector<long long>ans,sz;
    vector<long long>fact;
    long long power(long long a,long long b){
        
        if(b == 0)
            return 1;
        long long temp = power(a,b/2);
        long long even = (temp*temp)%mod;
        if(b%2 == 0)
            return even;
        else
            return (a*even)%mod;
        
        
        
    }
    long long modinv(long long x){
        return power(x,mod-2);
    }
    void precompute(int n){
        long long prod=1;
        fact[1]=1;
        fact[0]=1;
        for(long long i=2;i<=n;i++){
            prod=(prod*i)%mod;
            fact[i]=prod;
        }
    }
    void dfs(int src){
        ans[src]=1;
        sz[src]=1;
        for(auto edge:adj[src]){
            dfs(edge);
            sz[src]=(sz[src]+sz[edge])%mod;
            ans[src]=(ans[src]*ans[edge])%mod;
            ans[src]=(ans[src]*modinv(fact[sz[edge]]))%mod;
        }
        ans[src]=(ans[src]*fact[sz[src]-1])%mod;
    }
    int waysToBuildRooms(vector<int>& prevRoom) {
        for(int i=1;i<prevRoom.size();i++) adj[prevRoom[i]].push_back(i);
        ans.resize(prevRoom.size());
        sz.resize(prevRoom.size());
        fact.resize(prevRoom.size()+1);
        precompute(prevRoom.size());
        dfs(0);
        return ans[0];
    }
};