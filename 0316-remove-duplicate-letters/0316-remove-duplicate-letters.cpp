class Solution {
public:
    string removeDuplicateLetters(string s) {
        
     unordered_map<char,int>mp;
     stack<char>st;
     set<char>vis;
     for(int i = 0;i<s.size();i++)
     {
         mp[s[i]] = i;
     }
     for(int i = 0;i<s.size();i++)
     {
        
         if(vis.find(s[i])!= vis.end())
             continue;
         
         while(st.size() > 0 && st.top() > s[i] && i < mp[st.top()])
         {   
             char  prev = st.top();
             st.pop();
             vis.erase(prev);
         }
         
         st.push(s[i]);
         vis.insert(s[i]);
     }
        
        
    string ans =  "";
    while(st.size() > 0 )
    {
        ans+= st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;    
    }
};