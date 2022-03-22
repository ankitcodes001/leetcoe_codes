class Solution {
public:
    
    int count(vector<int>&a,vector<int>&b,int k)
    {
        int res1=0,res2=0;
        for(int i =0;i<a.size();i++)
        {
            if(a[i]!=k && b[i]!= k) return -1;
             if(a[i]!= k) res1++;
            if(b[i]!=k) res2++;
    
        }
        
    return min(res1,res2);    
        
    }
    
    int minDominoRotations(vector<int>& top, vector<int>& bot) {
        
        int x = top[0];
        int y = bot[0];
        
        int ans1 = count(top,bot,x);
        int ans2 = count(top,bot,y);
        
        return min(ans1,ans2)>0?min(ans1,ans2):max(ans1,ans2);
     
        
        
        
        
        
        
        
    }
};