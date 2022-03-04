class Solution {
public:
    double champagneTower(int poured, int row, int col) {
        // approach 
        // so as the champenge will be from 2nd glass will be distributed in equal half from left and right
        //    n
       //   n/2 n/2
       //             v[i][j]
//        v[i+1][j]+=v[i][j]/2.0  v[i+1][j+1]+=v[i][j]/2.0
        
        double dp[101][101] = {0.0};
        dp[0][0]=poured;
        for(int i =0;i<100;i++)
        {
            for(int j=0;j<=i;j++)
            {
                
                if(dp[i][j]>=1)
                {
                    dp[i+1][j]+=((dp[i][j]-1)/2.0);
                    dp[i+1][j+1]+=((dp[i][j]-1)/2.0);
                    dp[i][j]= 1;

                }
                
            }
        }
          
      return dp[row][col] ;   
        
    }
};