class Solution {
public:
int intLength(int i) {
    int l = 0;
    for (i; i!=0; i /= 10) l++;
    return l ;
}
    bool isPalindrome(int x) {
         if(x<0)
    {return 0;}
       const int s = intLength(x);
   int *ar1=new int[intLength(x)],*ar2=new int[intLength(x)];
    for (int i = 0,j=s-1; i < s;j--, i++)
    {
        ar1[i] = (x % 10);
        x /= 10;
        ar2[j] = ar1[i];
    }
    for (int i = 0; i < s; i++)
    {
        if(ar1[i]!=ar2[i])
        return 0;
    }
    return 1;
    }
};