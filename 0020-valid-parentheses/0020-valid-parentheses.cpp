class Solution {
public:
    bool isValid(string s) {
        int stack[10000],top=-1,x=0,y=0,z=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                x++;
                stack[++top]=s[i];
            }
             else if(s[i]=='{'){
                y++;
                stack[++top]=s[i];
            }
             else if(s[i]=='[')
             {
                z++;
                stack[++top]=s[i];
            }

            if(top>=0)
            {
              if(s[i]==')' && x>=1 && stack[top]=='(')
              {
                x--;
                top--;
              }
              else if(s[i]=='}'&&y>=1 && stack[top]=='{')
              {
                y--;
                top--;
              }
              else if(s[i]==']'&& z>=1 && stack[top]=='[')
              {
                z--;
                top--;
              }
               else if (s[i] == ']' || s[i] == ')' || s[i] == '}') {  return 0; }
            }else return 0;
        }
        if(top<=-1)
        return true;
        else return 0;
    }
};