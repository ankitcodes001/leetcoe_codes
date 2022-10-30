class Solution {
public:
    int balancedString(string s) {
           int n=s.size();
        int q=0,w=0,e=0,r=0;
        for(auto &i:s){
            if(i=='Q')q++;
            if(i=='W')w++;
            if(i=='E')e++;
            if(i=='R')r++;
        }
        //count of faulty q,w,e,r which needs to be replaced
        int fq=0,fw=0,fe=0,fr=0;
        if(q>n/4)fq=q-n/4;
        if(w>n/4)fw=w-n/4;
        if(e>n/4)fe=e-n/4;
        if(r>n/4)fr=r-n/4;
        int i=0,j=0;
        q=0,w=0,e=0,r=0;
        int res=INT_MAX;
        while(j<n){
            if(s[j]=='Q')q++;
            if(s[j]=='W')w++;
            if(s[j]=='E')e++;
            if(s[j]=='R')r++;
            
            
            while((s[i]=='Q'&&q>fq)||(s[i]=='W'&&w>fw)||(s[i]=='E'&&e>fe)||(s[i]=='R'&&r>fr)){
                if(s[i]=='Q')q--;
                if(s[i]=='W')w--;
                if(s[i]=='E')e--;
                if(s[i]=='R')r--;
                i++;
            }
            if(q>=fq&&w>=fw&&e>=fe&&r>=fr)res=min(res,j-i+1);
            j++;
        }
        return res;
    }
    

};