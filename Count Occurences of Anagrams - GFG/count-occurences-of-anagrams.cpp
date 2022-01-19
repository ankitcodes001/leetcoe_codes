// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    vector<int>pat_freq(26,0),txt_freq(26,0);
	    for(int i =0;i<pat.size();i++)
	    {
	        pat_freq[pat[i]-'a']++;
	    }
	    int k = pat.size();
	    int i =0,j=0;
	    int c=0;
	    while(j<txt.size())
	    {   txt_freq[txt[j]-'a']++;
	        if(j-i+1 < k)j++;
	        
	        else if(j-i+1  == k)
	        {
	            if(pat_freq == txt_freq)
	              c++;
	              txt_freq[txt[i]-'a']--;
	              i++;
	              j++;
	        }
	    }
	    
	    
	    return c;
	    
	    
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends