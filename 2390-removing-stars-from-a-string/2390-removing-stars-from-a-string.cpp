class Solution {
public:
    string removeStars(string s) {
    stack<char>st;
    for(int i = 0;i<s.size();i++)
    {
       if(s[i]!= '*')
           st.push(s[i]);
        else
        {
            if(st.size()>0)
                st.pop();
        }
        
    }
        
    string temp = "";
    while(st.size()>0)
    {
        temp+=st.top();
        st.pop();
        
    }
        
    reverse(temp.begin(),temp.end());    
    return temp;
    }
};