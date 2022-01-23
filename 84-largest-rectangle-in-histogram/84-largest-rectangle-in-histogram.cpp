class Solution {
public:
    
    vector<int>nsr(vector<int>a)
    {
        vector<int>v;
        stack<int>s;
        int n = a.size();
        for(int i = n-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else if(s.size()>0 && a[s.top()]< a[i])
                v.push_back(s.top());
            else if(s.size()>0 && a[s.top()]>=a[i])
            {
                while(s.size()>0 && a[s.top()]>=a[i])
                {
                    s.pop();
                }
                if(s.size() == 0)
                {
                    v.push_back(-1);
                }
                else 
                  v.push_back(s.top());
                
            }
            
            s.push(i);
            
            
            
        }
    
        reverse(v.begin(),v.end());
        return v;
       
        
    }
    
    
  vector<int>nsl(vector<int>a)
    {
        vector<int>v;
        stack<int>s;
        int n = a.size();
        for(int i = 0;i<n;i++)
        {
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else if(s.size()>0 && a[s.top()]< a[i])
                v.push_back(s.top());
            else if(s.size()>0 && a[s.top()]>=a[i])
            {
                while(s.size()>0 && a[s.top()]>=a[i])
                {
                    s.pop();
                }
                if(s.size() == 0)
                {
                    v.push_back(-1);
                }
                else 
                  v.push_back(s.top());
                
            }
            
            s.push(i);
            
            
            
        }
    
        
        return v;
       
        
    }
    
    
    
    
       
    
    
    
    
    int largestRectangleArea(vector<int>& h) {
        
        vector<int>v1 = nsr(h);
        vector<int>v2 = nsl(h);
        int n = h.size();
        int ans  = INT_MIN;
        for(int i =0;i<h.size();i++)
        {
            int r  = v1[i];
            int l =  v2[i];
            if(l == -1) l= -1;
            if(r== -1)  r= n;
            
            int w = (r-1)-(l+1)+1;
            
            
            
            ans = max(ans,w*h[i]);
            
            
        }
        return ans;
        
        
    }
};