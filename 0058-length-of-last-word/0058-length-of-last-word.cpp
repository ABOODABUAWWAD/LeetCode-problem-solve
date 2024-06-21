class Solution {
public:
    int lengthOfLastWord(string s) {
        short length_s1=0,length_s2;
        for(int i=0;i<s.length();i++){
            if(s[i]!=32)
            {
                length_s1++;
            }
            else if(s[i]==32)
            {
                if(length_s1!=0) 
                {
                length_s2=length_s1;
                }
            length_s1=0;
            }
        }
          if(length_s1!=0)
          return length_s1;
          else
          return length_s2;
    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();