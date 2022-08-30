class Solution {
public:
    int garbageCollection(vector<string>& a, vector<int>& t) 
    {
        for(int i = 1;i<t.size();i++)
        {
            t[i]+=t[i-1];
        }
        long long  ans = 0;
        long long gg = -1,mm = -1, pp = -1;
        int m,g,p;
        for(int i = 0;i<a.size();i++)
        {
            m  = 0;
            p = 0;
            g = 0;
            for(int j = 0;j<a[i].size();j++)
            {
               if(a[i][j] == 'G')
                   g++;
              
               if(a[i][j] == 'M')
                   m++;
                
              if(a[i][j] == 'P')
                   p++;

            }
            
            if(g>0)
            {
            ans = ans+g+(i>0 ? t[i-1]:0)-(gg > 0 ? t[gg-1]:0);
            gg =i;
            }
            
            if(p>0)
            {
            ans = ans+p+(i>0 ? t[i-1]:0)-(pp > 0 ? t[pp-1]:0);
             pp = i;
            }
             if(m>0)
            {
            ans = ans+m+(i>0 ? t[i-1]:0)-(mm > 0 ? t[mm-1]:0);
             mm =i;
            }

        }
     
        return ans;
    }
};