class MyCalendar {
public:
    
    
    map<int,int>mp;
    MyCalendar() {   
        mp.clear();
    }
    
    bool book(int start, int end) {
     
     auto it = mp.upper_bound(start);
     if(it == mp.end() || (it->second >= end and it->first >=end))
     {
         mp[end] = start;
         return true;
     }
        
     return false;   
     
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */