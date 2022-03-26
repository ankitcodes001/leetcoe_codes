class CombinationIterator {
    vector<string>ans;
    string temp;
    int ptr;
    void fun(string &s,int i ,int n , int len)
    {
        if(len == 0)
        {
            ans.push_back(temp);
            return;
        }
        
        if(i >=s.size())
            return;
        
        temp+=s[i];
        fun(s,i+1,n,len-1);
        temp.pop_back();
        fun(s,i+1,n,len);
    }
    
    
    
public:
    CombinationIterator(string s, int k) {
        int n = k;
        
        fun(s,0,n,k);
        ptr =0;    
    }
    
    string next() {
        
        return ans[ptr++];
        
    }
    
    bool hasNext() {
        
  return ptr<ans.size()?true:false;
        
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */