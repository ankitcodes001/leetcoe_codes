class Solution {
public:
    int convertTime(string s1, string s2) {
   
        
        int h1 = stol(s1.substr(0,2));
        int m1  = stol(s1.substr(3,2));
        int h2 = stol(s2.substr(0,2));
        int m2  = stol(s2.substr(3,2));
    
       int minute1 = m1+h1*60;
       int minute2  = m2+h2*60;
        
      int d  = minute2- minute1;
        
     int a  = d/60;
     int b =  ((d%60)/15);
     int c = ((d%60)%15)/5;
    int   x=      (((d%60)%15)%5)/1;
  return a+b+c+x;
    }
};