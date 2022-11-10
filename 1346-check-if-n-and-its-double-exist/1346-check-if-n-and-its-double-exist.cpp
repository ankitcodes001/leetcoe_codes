class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
     
     set<int>s;
     for(auto x:arr)
     {
         if((x%2 == 0 && s.count(x/2)!=0) || (s.count(2*x)!=0))
           return true;
        s.insert(x);
     }  
    return false;
            
    }
};