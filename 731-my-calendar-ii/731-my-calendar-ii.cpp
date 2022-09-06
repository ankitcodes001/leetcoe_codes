class MyCalendarTwo {
public:
    map<int,int>mp;
    
    bool canAdd()
    {
        int count  = 0;
        for(auto x : mp)
        {
            count+=x.second;
            if(count > 2)
                return false;
        }
       return true; 
    }
    
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
     mp[start]++;
     mp[end]--;
     
    if(canAdd())
        return true;
    else
    {
        mp[start]--;
        mp[end]++;
        return false;
    }
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */