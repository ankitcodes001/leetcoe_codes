class Solution {
public:
    vector<int> getRow(int n) {
        
        vector<int>v;
        //c(n,r) = n!/r!*(n-r)!;
        // for any value in pascal triangle we can use this formula to get the values
        // c(r,c)  r->row,c->col
        // r*(r-1)*(r-2)/(c)*(c-1)*(c-2)
        
         long long  val =1;
         int r = n;
         int c = 1;
        for(int i = 0;i<=n;i++)
        {
            v.push_back(val);
            val = val*(r--)/c++;
            
            
        }
        
        return v;
       
        
    }
};