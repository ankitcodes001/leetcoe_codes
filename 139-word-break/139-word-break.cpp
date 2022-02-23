class Solution {
public:
     unordered_map<string,bool>mp;
    bool wordBreak(string s, vector<string>& word) {
     // using recursion it we are getting tle 
     // due to overlapping subproblem
     // but using memorization
    // we can solve the probleme in o(n^2)
    // o(n) extra space;    
        
        
    auto it  = find(word.begin(),word.end(),s);
        if(it!= word.end())
            return true;
     if(mp.find(s)!= mp.end())
         return mp[s];
       
     for(int i=0;i<s.size();i++)
     {
         string left = s.substr(0,i);
         string right  = s.substr(i);
         auto it  = find(word.begin(),word.end(),left);
             
          if(it!= word.end())
          {
              if(wordBreak(right,word))
                  return mp[s] = true;
              
              
          }
             
         
         
     }
     return mp[s]= false;
      
        
    }
};