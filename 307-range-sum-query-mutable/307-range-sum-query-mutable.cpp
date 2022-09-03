class NumArray {
public:
    
    
    vector<int>tree;
    int n;
    void build(int node,int s,int e,vector<int>&a)
    {
        if(s == e)
        {
        tree[node] = a[s];
        return;
        }
        
        int mid = (s+e)/2;
        
        build(2*node,s,mid,a);
        build(2*node+1,mid+1,e,a);
        
        tree[node] = tree[2*node]+tree[2*node+1];
    }
    
    void updating(int node,int s,int e,int index,int val)
    {
      if(index <s || index >e) return;  
        
     if(s == e)
      {  if(s == index)
         tree[node] = val;
          return;
      }
        
      int  mid = (s+e)/2;
    
      updating(2*node,s,mid,index,val);
      updating(2*node+1,mid+1,e,index,val);
     
     
     tree[node] = tree[2*node]+tree[2*node+1];
        
    }
    
    int sum(int node,int s,int e,int l ,int r)
    {
        if(s>r || l>e)
            return 0;
        else if(s>=l && e<=r)
            return tree[node];
        int mid = (s+e)/2;
        int q1 = sum(2*node,s,mid,l,r);
        int q2 = sum(2*node+1,mid+1,e,l,r);
        return q1+q2;
    }
    
    NumArray(vector<int>& nums) {
      
      n = nums.size();
      tree.resize(4*nums.size(),0);
      build(1,0,n-1,nums);
        
    }
    
    

    
    void update(int index, int val) {
        if(n==0)
            return;
        updating(1,0,n-1,index,val);
        
    }
    
    int sumRange(int left, int right) {
         if(n == 0)
             return  0;
        return sum(1,0,n-1,left,right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */