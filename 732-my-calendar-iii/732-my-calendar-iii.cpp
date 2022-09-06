class MyCalendarThree {
public:
    map<int,int>mp;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
    mp[start]++;
    mp[end]--;
    int ans  = 0;
    int maxi=0;    
    for(auto x : mp)
    {
        ans+=x.second;
        maxi = max(maxi,ans);
    }
    return maxi;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */