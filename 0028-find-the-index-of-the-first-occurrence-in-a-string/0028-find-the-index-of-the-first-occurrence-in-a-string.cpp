class Solution {
public:
    int strStr(string haystack, string needle) {
        short s_hay=haystack.length(),s_needle=needle.length();
        for (int i=0;i<s_hay;i++)
        {  
                if(haystack[i]==needle[0]){
                    if(check_needle(haystack,needle,i))
                    {
                    return i;
                    }
                }    
        }
return -1;
    }
    bool check_needle(string bigst,string needle,int i){
        short s_needle=needle.length();
        for(int j=0;j<s_needle;j++)
       {   if(bigst[i]==needle[j])
           {
               i++;
           }
           else return false;

       }return true;


    }

};