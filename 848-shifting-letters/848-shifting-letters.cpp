class Solution {
public:
    string shiftingLetters(string s, vector<int>& shift) {
     int n = s.size();
     long long int sum =0;   
     for(int i = n-1;i>=0;i--)
     { sum+=shift[i];
       char x = 'a'+(s[i]-'a'+sum)%26;
        s[i] = x;        
     }
        
     return s;   
    }
};