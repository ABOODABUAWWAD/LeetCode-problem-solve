class Solution {
public:
    int climbStairs(int n) {
        int sum[46];
        sum[0]=1;
        sum[1]=2;
        for(int i=2;i<n;i++){
            sum[i]=0;
            sum[i]=sum[i-1]+sum[i-2];
        }
        return sum[n-1];
              
    }
};