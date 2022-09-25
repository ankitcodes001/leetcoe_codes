class Solution {
public:
    vector<string>ans;
    string output;
    void solve(vector<string>&v,string digits,int idx)
    {
        if(idx == digits.size())
        {
            ans.push_back(output);
            return;
        }
        int no = digits[idx]-'0';
        string  temp = v[no];
        for(int i = 0;i<temp.size();i++)
        {
            output.push_back(temp[i]);
            solve(v,digits,idx+1);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
    vector<string>v = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    if(digits.size() == 0)  
        return {};
    solve(v,digits,0);
    return ans;    
        
        
    }
};