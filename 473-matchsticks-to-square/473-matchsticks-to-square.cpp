class Solution {
public:
    bool solve(vector<int>&m,vector<int>&side,int i)
    {
        
        if(i==m.size())
        {
         return side[0] == 0 && side[1] == 0 && side[2] == 0 && side[3] == 0;
        }
        
        for(int j =0;j<side.size();j++)
        {  if(m[i]>side[j]) continue;
            side[j]-=m[i];
            if(solve(m,side,i+1))
            {
                return true;
            }
             side[j]+=m[i];
        }
        
        return false;
        
    }
    bool makesquare(vector<int>& m) {
        if(m.size()<4)
            return false;
        int sum = 0;
        for(auto x : m)
            sum+=x;
        
     if(sum%4!=0)
         return false;
     int s = sum/4;
     vector<int>side(4,s);
     sort(m.begin(),m.end(),greater<int>());   
     return solve(m,side,0);   
        
  
        
        
    }
};