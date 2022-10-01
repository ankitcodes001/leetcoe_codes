class Solution {
public:
    int ladderLength(string begin, string end, vector<string>& word) {
    set<string>s(word.begin(),word.end());
    queue<string>q;
    q.push(begin);
    bool flag = false;
    int ans = 0;
    int cnt = 0;
    while(q.size() > 0)
    {
        cnt++;
        int x = q.size();
        
        while(x--)
        {
            string temp = q.front();
            if(temp == end)
                return cnt;
            
            for(int i = 0;i<temp.size();i++)
            {  
                for(char c = 'a';c<='z';c++)
                {
                    char p = temp[i];
                    temp[i] = c;
                    if(s.find(temp)!= s.end())
                    {
                        q.push(temp);
                    }
                    s.erase(temp);
                    temp[i] = p;
                    
                }
            }
            
            q.pop();
        }
        
    }
    
    return  0;
    }
};