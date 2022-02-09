class Solution {
public:
    
    int dp[1000][101][2];
    
    int find(vector<int>&a,int i,int k,int check)
    {
        if(i>=a.size() || k<=0)
            return 0;
        
        if(dp[i][k][check]!= -1)
            return dp[i][k][check];
       
        int buy =0,not_buy =0,sell=0,not_sell=0;
        if(check && k)
         buy = find(a,i+1,k,!check)-a[i];
         not_buy = find(a,i+1,k,check);
        
        if(!check && k)
           sell = find(a,i+1,k-1,!check)+a[i];
           not_sell = find(a,i+1,k,check);
        
        return dp[i][k][check] = max({sell,not_sell,buy,not_buy});
      
        
    }
  
    
    
    
    int maxProfit(int k, vector<int>& a) {
        
        /* days
            4   2    1
  tran  0   0   0    0
        
        1   0   2    2     
        
        2   0   2    2
       
        */
        
        // recursive
        
        
        
        
        int n = a.size();
        
        
        if(n==0 || k ==0)
            return 0;
        memset(dp,-1,sizeof(dp));
        
        return find(a,0,k,1);
       
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        /*
        recursi
        
        
        int n = a.size();
        if(n==0 || k==0)
            return 0;
        int dp[k+1][n];// dp - transaction - day;
        
        for(int i =0;i<=k;i++)
        {
            for(int j =0;j<n;j++)
            {
                if(i==0 || j ==0)
                    dp[i][j] =0;
                    
                
                
            }
        }
        
        
        
        
        // o(n2)
        for(int t =1;t<=k;t++)
        {
            int maxi = INT_MIN;
            
            for(int d = 1;d<n;d++)
            {
                maxi = max(dp[t-1][d-1]- a[d-1],maxi);
             
                dp[t][d] = max(maxi+a[d],dp[t][d-1]);
                
                
            }
        }
        
        return dp[k][n-1];
        
        
        
        
        
        */
        
    }
};